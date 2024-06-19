
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif
// clang-format off

extern "C" {
#include <php.h>
#include <ext/standard/info.h>
#include <ext/standard/basic_functions.h>
#define try try_ //try is a reserved keyword in C++
#include <zend_enum.h>
#undef try
#include <zend_API.h>
#include "zend_types.h"
#include "zend_exceptions.h"
#include "ada_c.h"
#include "php_ada_url.h"
#include "ada_url_arginfo.h"
}
// clang-format on
/* For compatibility with older PHP versions */
#ifndef ZEND_PARSE_PARAMETERS_NONE
#define ZEND_PARSE_PARAMETERS_NONE()                                                               \
    ZEND_PARSE_PARAMETERS_START(0, 0)                                                              \
    ZEND_PARSE_PARAMETERS_END()
#endif
static zend_object_handlers URLSearchParams_object_handlers;
static zend_object_handlers URL_object_handlers;
static zend_class_entry *URLSearchParams_ce;
static zend_class_entry *URL_ce;
static zend_class_entry *HostType_ce;
static zend_class_entry *SchemeType_ce;
struct HostType {
    enum Kind : uint8_t {
        DEFAULT,
        IPV4,
        IPV6,
    };
    static zend_object *ToZval(uint8_t hosttype) {
        const char *entryname;
        switch (Kind(hosttype)) {
            case IPV4: entryname = "IPV4"; break;
            case IPV6: entryname = "IPV6"; break;
            case DEFAULT:
            default: entryname = "DEFAULT"; break;
        }
        return zend_enum_get_case_cstr(HostType_ce, entryname);
    }
};
struct SchemeType {
    enum Kind : uint8_t {
        HTTP,
        NOT_SPECIAL,
        HTTPS,
        WS,
        FTP,
        WSS,
        FILE,
    };
    static zend_object *ToZval(uint8_t schemetype) {
        const char *entryname;
        switch (Kind(schemetype)) {
            case NOT_SPECIAL: entryname = "NOT_SPECIAL"; break;
            case HTTPS: entryname = "HTTPS"; break;
            case WS: entryname = "WS"; break;
            case FTP: entryname = "FTP"; break;
            case WSS: entryname = "WSS"; break;
            case FILE: entryname = "FILE"; break;
            case HTTP:
            default: entryname = "HTTP"; break;
        }
        return zend_enum_get_case_cstr(SchemeType_ce, entryname);
    }
};
#define DECLARE_AND_PARSE_ONE_STRING_PARAM(name)                                                   \
    char *name;                                                                                    \
    size_t name##_length;                                                                          \
    ZEND_PARSE_PARAMETERS_START(1, 1)                                                              \
    Z_PARAM_STRING(name, name##_length)                                                            \
    ZEND_PARSE_PARAMETERS_END()
#define DECLARE_AND_PARSE_TWO_STRING_PARAMS(name1, name2)                                          \
    char *name1, *name2;                                                                           \
    size_t name1##_length, name2##_length;                                                         \
    ZEND_PARSE_PARAMETERS_START(2, 2)                                                              \
    Z_PARAM_STRING(name1, name1##_length)                                                          \
    Z_PARAM_STRING(name2, name2##_length)                                                          \
    ZEND_PARSE_PARAMETERS_END()
#define X_ADA_URL_PROPS(X)                                                                         \
    X(protocol)                                                                                    \
    X(username)                                                                                    \
    X(password)                                                                                    \
    X(hostname)                                                                                    \
    X(port)                                                                                        \
    X(pathname)                                                                                    \
    X(search)                                                                                      \
    X(hash)
#define X_ADA_URL_METHODS_HAS(X)                                                                   \
    X(Credentials, credentials)                                                                    \
    X(EmptyHostname, empty_hostname)                                                               \
    X(Hostname, hostname)                                                                          \
    X(NonEmptyUsername, non_empty_username)                                                        \
    X(NonEmptyPassword, non_empty_password)                                                        \
    X(Password, password)
#define X_ADA_URL_PROPS_CLEARABLE(X)                                                               \
    X(Port, port)                                                                                  \
    X(Hash, hash)                                                                                  \
    X(Search, search)
#define X_ADA_URL_PROPS_GET_SETTABLE(X)                                                            \
    X(Href, href)                                                                                  \
    X(Username, username)                                                                          \
    X(Password, password)                                                                          \
    X(Protocol, protocol)                                                                          \
    X(Port, port)                                                                                  \
    X(Hostname, host)                                                                              \
    X(Host, host)                                                                                  \
    X(Pathname, pathname)
#define XXX_METHOD_NAME(action, name) ada_##action##_##name
#define PHP_ADA_URL_HAS_METHOD(name, m)                                                            \
    ZEND_METHOD(URL, has##name) {                                                                  \
        ZEND_PARSE_PARAMETERS_NONE();                                                              \
        RETURN_BOOL(XXX_METHOD_NAME(has, m)(URL::Fetch(ZEND_THIS)->data_));                        \
    }
#define PHP_ADA_URL_CLEAR_METHOD(name, m)                                                          \
    ZEND_METHOD(URL, clear##name) {                                                                \
        ZEND_PARSE_PARAMETERS_NONE();                                                              \
        XXX_METHOD_NAME(clear, m)(URL::Fetch(ZEND_THIS)->data_);                                   \
    }
#define PHP_ADA_URL_SETTER_METHOD(name, m)                                                         \
    ZEND_METHOD(URL, set##name) {                                                                  \
        DECLARE_AND_PARSE_ONE_STRING_PARAM(value);                                                 \
        RETURN_BOOL(XXX_METHOD_NAME(set, m)(URL::Fetch(ZEND_THIS)->data_, value, value_length));   \
    }
#define PHP_ADA_URL_SETTER_METHOD_VOID(name, m)                                                    \
    ZEND_METHOD(URL, set##name) {                                                                  \
        DECLARE_AND_PARSE_ONE_STRING_PARAM(value);                                                 \
        XXX_METHOD_NAME(set, m)                                                                    \
        (URL::Fetch(ZEND_THIS)->data_, value, value_length);                                       \
    }
#define PHP_ADA_URL_GETTER_METHOD(name, m)                                                         \
    ZEND_METHOD(URL, get##name) {                                                                  \
        ZEND_PARSE_PARAMETERS_NONE();                                                              \
        ada_string r = XXX_METHOD_NAME(get, m)(URL::Fetch(ZEND_THIS)->data_);                      \
        zend_string *result = zend_string_init(r.data, r.length, 0);                               \
        RETURN_STR(result);                                                                        \
    }
struct URLSearchParams {
    ada_url_search_params data_;
    zend_object std;
    static inline URLSearchParams *Fetch(zend_object *obj) {
        return (URLSearchParams *) ((char *) obj - XtOffsetOf(URLSearchParams, std));
    }
    static inline URLSearchParams *Fetch(zval *zvp) { return Fetch(Z_OBJ_P(zvp)); }
    static void Free(zend_object *object) {
        URLSearchParams *url_search_params = Fetch(object);
        if (url_search_params->data_ != nullptr) {
            ada_free_search_params(url_search_params->data_);
        }
        zend_object_std_dtor(&url_search_params->std);
    }
    static inline zend_object *Create(zend_class_entry *ce) {
        URLSearchParams *url_search_params = (URLSearchParams *) emalloc(sizeof(URLSearchParams));
        zend_object_std_init(&url_search_params->std, ce);
        // object_properties_init(&url_search_params->std, ce);
        url_search_params->std.handlers = &URLSearchParams_object_handlers;
        url_search_params->data_ = nullptr;
        return &url_search_params->std;
    }
    static URLSearchParams *New(zend_class_entry *ce) { return Fetch(Create(ce)); }
    static inline void Register() {
        URLSearchParams_ce = register_class_URLSearchParams();
        URLSearchParams_ce->default_object_handlers = &URLSearchParams_object_handlers;
        URLSearchParams_ce->create_object = Create;
        memcpy(&URLSearchParams_object_handlers,
               zend_get_std_object_handlers(),
               sizeof(zend_object_handlers));
        URLSearchParams_object_handlers.offset = XtOffsetOf(URLSearchParams, std);
        URLSearchParams_object_handlers.free_obj = Free;
        URLSearchParams_object_handlers.clone_obj = nullptr;
    }
};
struct URL {
    ada_url data_;
    // ada_url_search_params search_params;
    URLSearchParams *search_params;
    zend_object std;
    static inline URL *Fetch(zend_object *obj) {
        return (URL *) ((char *) obj - XtOffsetOf(URL, std));
    }
    static inline URL *Fetch(zval *zvp) { return Fetch(Z_OBJ_P(zvp)); }
    static URL *New(zend_class_entry *ce) { return Fetch(Create(ce)); }
    static inline void Register() {
        URL_ce = register_class_URL();
        URL_ce->create_object = Create;
        URL_ce->default_object_handlers = &URL_object_handlers;
        memcpy(&URL_object_handlers, zend_get_std_object_handlers(), sizeof(zend_object_handlers));
        URL_object_handlers.offset = XtOffsetOf(URL, std);
        URL_object_handlers.free_obj = Free;
        URL_object_handlers.clone_obj = nullptr;
        URL_object_handlers.get_properties_for = GetPropertiesFor;
    }
    static HashTable *GetPropertiesFor(zend_object *object, zend_prop_purpose purpose) /* {{{ */
    {

        switch (purpose) {
            case ZEND_PROP_PURPOSE_DEBUG:
            case ZEND_PROP_PURPOSE_SERIALIZE:
            case ZEND_PROP_PURPOSE_VAR_EXPORT:
            case ZEND_PROP_PURPOSE_JSON:
            case ZEND_PROP_PURPOSE_ARRAY_CAST: break;
            default: return zend_std_get_properties_for(object, purpose);
        }
        auto url_ = Fetch(object);
        auto props = zend_array_dup(zend_std_get_properties(object));
#define _____(X)                                                                                   \
    zval zv_##X;                                                                                   \
    ada_string X = ada_get_##X(url_->data_);                                                       \
    ZVAL_STRINGL(&zv_##X, X.data, X.length);                                                       \
    zend_hash_str_update(props, #X, sizeof(#X) - 1, &zv_##X);
        X_ADA_URL_PROPS(_____);
#undef _____
        return props;
    } /* }}} */
    static void Free(zend_object *object) {
        URL *url = Fetch(object);
        if (url->data_ != nullptr) { ada_free(url->data_); }
        if (url->search_params != nullptr) { ada_free_search_params(url->search_params); }
        zend_object_std_dtor(&url->std);
    }
    static inline zend_object *Create(zend_class_entry *ce) {
        URL *url = (URL *) emalloc(sizeof(URL));
        zend_object_std_init(&url->std, ce);
        url->std.handlers = &URL_object_handlers;
        url->search_params = nullptr;
        url->data_ = nullptr;
        return &url->std;
    }
};
#undef ADA_FREE_STORAGE_CREATE_OBJECT
#define PHP_ADA_URL_GETTER_SETTER_METHOD(name, m)                                                  \
    PHP_ADA_URL_SETTER_METHOD(name, m)                                                             \
    PHP_ADA_URL_GETTER_METHOD(name, m)
PHP_ADA_URL_SETTER_METHOD_VOID(Search, search)
PHP_ADA_URL_SETTER_METHOD_VOID(Hash, hash)
PHP_ADA_URL_GETTER_METHOD(Search, search)
PHP_ADA_URL_GETTER_METHOD(Hash, hash)
X_ADA_URL_METHODS_HAS(PHP_ADA_URL_HAS_METHOD)
X_ADA_URL_PROPS_CLEARABLE(PHP_ADA_URL_HAS_METHOD)
X_ADA_URL_PROPS_CLEARABLE(PHP_ADA_URL_CLEAR_METHOD)
X_ADA_URL_PROPS_GET_SETTABLE(PHP_ADA_URL_GETTER_SETTER_METHOD)
ZEND_METHOD(URL, parse) {
    char *input, *base = nullptr;
    size_t input_length, base_length = 0;
    ZEND_PARSE_PARAMETERS_START(1, 2)
    Z_PARAM_STRING(input, input_length)
    Z_PARAM_OPTIONAL
    Z_PARAM_STRING(base, base_length)
    ZEND_PARSE_PARAMETERS_END();
    ada_url url;
    if (base == nullptr) {
        url = ada_parse(input, input_length);
    } else {
        url = ada_parse_with_base(input, input_length, base, base_length);
    }
    if (!ada_is_valid(url)) RETURN_NULL();
    URL *url_obj = URL::New(URL_ce);
    url_obj->data_ = url;
    RETURN_OBJ(&url_obj->std);
}
ZEND_METHOD(URL, parseWithBase) {
    char *input, *base;
    size_t input_length, base_length;
    ZEND_PARSE_PARAMETERS_START(2, 2)
    Z_PARAM_STRING(input, input_length)
    Z_PARAM_STRING(base, base_length)
    ZEND_PARSE_PARAMETERS_END();
    ada_url url = ada_parse_with_base(input, input_length, base, base_length);
    if (!ada_is_valid(url)) RETURN_NULL();
    URL *url_obj = URL::New(URL_ce);
    url_obj->data_ = url;
    RETURN_OBJ(&url_obj->std);
}
ZEND_METHOD(URL, canParse) {
    DECLARE_AND_PARSE_ONE_STRING_PARAM(input);
    RETURN_BOOL(ada_can_parse(input, input_length));
}
ZEND_METHOD(URL, canParseWithBase) {
    DECLARE_AND_PARSE_TWO_STRING_PARAMS(input, base);
    RETURN_BOOL(ada_can_parse_with_base(input, input_length, base, base_length));
}
ZEND_METHOD(URL, idnaToUnicode) {
    DECLARE_AND_PARSE_ONE_STRING_PARAM(input);
    ada_owned_string r = ada_idna_to_unicode(input, input_length);
    zend_string *result = zend_string_init(r.data, r.length, 0);
    ada_free_owned_string(r);
    RETURN_STR(result);
}
ZEND_METHOD(URL, idnaToAscii) {
    DECLARE_AND_PARSE_ONE_STRING_PARAM(input);
    ada_owned_string r = ada_idna_to_ascii(input, input_length);
    zend_string *result = zend_string_init(r.data, r.length, 0);
    ada_free_owned_string(r);
    RETURN_STR(result);
}
ZEND_METHOD(URL, __construct) {
    char *input, *base = nullptr;
    size_t input_length, base_length = 0;
    ZEND_PARSE_PARAMETERS_START(1, 2)
    Z_PARAM_STRING(input, input_length)
    Z_PARAM_OPTIONAL
    Z_PARAM_STRING(base, base_length)
    ZEND_PARSE_PARAMETERS_END();
    ada_url url;
    if (base == nullptr) {
        url = ada_parse(input, input_length);
    } else {
        url = ada_parse_with_base(input, input_length, base, base_length);
    }
    if (!ada_is_valid(url)) {
        zend_argument_value_error(1, "Invalid URL");
        RETURN_THROWS();
    }
    URL::Fetch(ZEND_THIS)->data_ = url;
}
ZEND_METHOD(URL, __toString) {
    ada_string r = ada_get_href(URL::Fetch(ZEND_THIS)->data_);
    zend_string *result = zend_string_init(r.data, r.length, 0);
    RETURN_STR(result);
}
ZEND_METHOD(URL, getOrigin) {
    ZEND_PARSE_PARAMETERS_NONE();
    ada_owned_string r = ada_get_origin(URL::Fetch(ZEND_THIS)->data_);
    zend_string *result = zend_string_init(r.data, r.length, 0);
    ada_free_owned_string(r);
    RETURN_STR(result);
}
ZEND_METHOD(URL, getHostType) {
    ZEND_PARSE_PARAMETERS_NONE();
    RETURN_OBJ_COPY(HostType::ToZval(ada_get_host_type(URL::Fetch(ZEND_THIS)->data_)));
}
ZEND_METHOD(URL, getSchemeType) {
    ZEND_PARSE_PARAMETERS_NONE();
    RETURN_OBJ_COPY(SchemeType::ToZval(ada_get_scheme_type(URL::Fetch(ZEND_THIS)->data_)));
}
ZEND_METHOD(URL, getSearchParams) {
    ZEND_PARSE_PARAMETERS_NONE();
    URL *url = URL::Fetch(ZEND_THIS);
    URLSearchParams *url_search_params = URLSearchParams::New(URLSearchParams_ce);
    auto search_data = ada_get_search(url->data_);
    url_search_params->data_ = ada_parse_search_params(search_data.data, search_data.length);
    RETURN_OBJ(&url_search_params->std);
}
ZEND_METHOD(URL, setSearchParams) {
    zval *url_search_params;
    ZEND_PARSE_PARAMETERS_START(1, 1)
    Z_PARAM_OBJECT_OF_CLASS(url_search_params, URLSearchParams_ce)
    ZEND_PARSE_PARAMETERS_END();
    URL *url = URL::Fetch(ZEND_THIS);
    auto search_params = URLSearchParams::Fetch(url_search_params);
    auto search_data = ada_search_params_to_string(search_params->data_);
    ada_set_search(url->data_, search_data.data, search_data.length);
    ada_free_owned_string(search_data);
}
ZEND_METHOD(URLSearchParams, __construct) {
    // DECLARE_AND_PARSE_ONE_STRING_PARAM(input);
    char *input = nullptr;
    size_t input_length = 0;
    ZEND_PARSE_PARAMETERS_START(0, 1)
    Z_PARAM_OPTIONAL
    Z_PARAM_STRING(input, input_length)
    ZEND_PARSE_PARAMETERS_END();
    URLSearchParams::Fetch(ZEND_THIS)->data_ = ada_parse_search_params(input, input_length);
}
ZEND_METHOD(URLSearchParams, __toString) {
    ada_owned_string r = ada_search_params_to_string(URLSearchParams::Fetch(ZEND_THIS)->data_);
    zend_string *result = zend_string_init(r.data, r.length, 0);
    ada_free_owned_string(r);
    RETURN_STR(result);
}
ZEND_METHOD(URLSearchParams, get) {
    DECLARE_AND_PARSE_ONE_STRING_PARAM(key);
    URLSearchParams *url_search_params = URLSearchParams::Fetch(ZEND_THIS);
    ada_string r = ada_search_params_get(url_search_params->data_, key, key_length);
    if (r.data == nullptr) { RETURN_NULL(); }
    zend_string *result = zend_string_init(r.data, r.length, 0);
    RETURN_STR(result);
}
ZEND_METHOD(URLSearchParams, getAll) {
    DECLARE_AND_PARSE_ONE_STRING_PARAM(key);
    URLSearchParams *url_search_params = URLSearchParams::Fetch(ZEND_THIS);
    ada_strings r = ada_search_params_get_all(url_search_params->data_, key, key_length);
    size_t size = ada_strings_size(r);
    array_init(return_value);
    for (size_t i = 0; i < size; i++) {
        ada_string s = ada_strings_get(r, i);
        zend_string *result = zend_string_init(s.data, s.length, 0);
        add_next_index_str(return_value, result);
    }
}
ZEND_METHOD(URLSearchParams, has) {
    DECLARE_AND_PARSE_ONE_STRING_PARAM(key);
    RETURN_BOOL(ada_search_params_has(URLSearchParams::Fetch(ZEND_THIS)->data_, key, key_length));
}
ZEND_METHOD(URLSearchParams, append) {
    DECLARE_AND_PARSE_TWO_STRING_PARAMS(key, value);
    ada_search_params_append(URLSearchParams::Fetch(ZEND_THIS)->data_,
                             key,
                             key_length,
                             value,
                             value_length);
}
ZEND_METHOD(URLSearchParams, set) {
    DECLARE_AND_PARSE_TWO_STRING_PARAMS(key, value);
    ada_search_params_set(URLSearchParams::Fetch(ZEND_THIS)->data_,
                          key,
                          key_length,
                          value,
                          value_length);
}
ZEND_METHOD(URLSearchParams, sort) {
    ZEND_PARSE_PARAMETERS_NONE();
    ada_search_params_sort(URLSearchParams::Fetch(ZEND_THIS)->data_);
}
ZEND_METHOD(URLSearchParams, delete) {
    DECLARE_AND_PARSE_ONE_STRING_PARAM(key);
    ada_search_params_remove(URLSearchParams::Fetch(ZEND_THIS)->data_, key, key_length);
}
ZEND_METHOD(URLSearchParams, keys) {
    ZEND_PARSE_PARAMETERS_NONE();
    ada_url_search_params_keys_iter iter =
        ada_search_params_get_keys(URLSearchParams::Fetch(ZEND_THIS)->data_);
    array_init(return_value);
    while (ada_search_params_keys_iter_has_next(iter)) {
        ada_string key = ada_search_params_keys_iter_next(iter);
        zend_string *result = zend_string_init(key.data, key.length, 0);
        add_next_index_str(return_value, result);
    }
    ada_free_search_params_keys_iter(iter);
}
ZEND_METHOD(URLSearchParams, values) {
    ZEND_PARSE_PARAMETERS_NONE();
    URLSearchParams *url_search_params = URLSearchParams::Fetch(ZEND_THIS);
    ada_url_search_params_values_iter iter = ada_search_params_get_values(url_search_params->data_);
    array_init(return_value);
    while (ada_search_params_values_iter_has_next(iter)) {
        ada_string value = ada_search_params_values_iter_next(iter);
        zend_string *result = zend_string_init(value.data, value.length, 0);
        add_next_index_str(return_value, result);
    }
    ada_free_search_params_values_iter(iter);
}
ZEND_METHOD(URLSearchParams, entries) {
    ZEND_PARSE_PARAMETERS_NONE();
    URLSearchParams *url_search_params = URLSearchParams::Fetch(ZEND_THIS);
    ada_url_search_params_entries_iter iter =
        ada_search_params_get_entries(url_search_params->data_);
    array_init(return_value);
    while (ada_search_params_entries_iter_has_next(iter)) {
        ada_string_pair entry = ada_search_params_entries_iter_next(iter);
        zval zentry;
        array_init(&zentry);
        zend_string *key = zend_string_init(entry.key.data, entry.key.length, 0);
        zend_string *value = zend_string_init(entry.value.data, entry.value.length, 0);
        add_next_index_str(&zentry, key);
        add_next_index_str(&zentry, value);
        add_next_index_zval(return_value, &zentry);
    }
    ada_free_search_params_entries_iter(iter);
}
#undef PHP_ADA_URL_HAS_METHOD
#undef PHP_ADA_URL_CLEAR_METHOD
#undef PHP_ADA_URL_GETTER_SETTER_METHOD
#undef X_ADA_URL_METHODS_HAS
#undef X_ADA_URL_PROPS_CLEARABLE
#undef X_ADA_URL_PROPS_GET_SETTABLE
#undef XXX_METHOD_NAME
//----------------------------------------------------------------
/* {{{ ada_url_module_entry */
extern "C" zend_module_entry ada_url_module_entry = {
    STANDARD_MODULE_HEADER,
    "ada_url", /* Extension name */
    nullptr,       /* zend_function_entry */
    [](int type, int module_number) {
#if defined(ZTS) && defined(COMPILE_DL_PHP_ADA_URL)
        ZEND_TSRMLS_CACHE_UPDATE();
#endif
        HostType_ce = register_class_HostType();
        SchemeType_ce = register_class_SchemeType();
        URL::Register();
        URLSearchParams::Register();
        return SUCCESS;
    },                                                   /* PHP_MINIT - Module initialization */
    [](int type, int module_number) { return SUCCESS; }, /* PHP_MSHUTDOWN - Module shutdown */
    nullptr,                                             /* PHP_RINIT - Request initialization */
    nullptr,                                             /* PHP_RSHUTDOWN - Request shutdown */
    [](zend_module_entry *zend_module) {
        php_info_print_table_start();
        php_info_print_table_row(2, "ada_url support", "enabled");
        php_info_print_table_row(2, "author", "lnear <hi@lnear.dev>");
        php_info_print_table_end();
    },                       /* PHP_MINFO - Module info */
    PHP_ADA_URL_VERSION, /* Version */
    STANDARD_MODULE_PROPERTIES};
/* }}} */
#ifdef COMPILE_DL_ADA_URL
#ifdef ZTS
ZEND_TSRMLS_CACHE_DEFINE()
#endif
ZEND_GET_MODULE(ada_url)
#endif
