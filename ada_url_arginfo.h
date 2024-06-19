/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 72f1325a4e488573f1b5419f6eb25bed9c63200d */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_URLSearchParams___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, init, IS_STRING, 0, "\"\"")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_URLSearchParams___toString, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_URLSearchParams_get, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_URLSearchParams_getAll, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_URLSearchParams_has, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_URLSearchParams_append, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_URLSearchParams_set arginfo_class_URLSearchParams_append

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_URLSearchParams_sort, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_URLSearchParams_delete, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_URLSearchParams_keys, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_URLSearchParams_values arginfo_class_URLSearchParams_keys

#define arginfo_class_URLSearchParams_entries arginfo_class_URLSearchParams_keys

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_URL___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, url, IS_STRING, 0, "\"\"")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, base, IS_STRING, 1, "null")
ZEND_END_ARG_INFO()

#define arginfo_class_URL___toString arginfo_class_URLSearchParams___toString

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_URL_hasCredentials, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_URL_hasEmptyHostname arginfo_class_URL_hasCredentials

#define arginfo_class_URL_hasHostname arginfo_class_URL_hasCredentials

#define arginfo_class_URL_hasNonEmptyUsername arginfo_class_URL_hasCredentials

#define arginfo_class_URL_hasNonEmptyPassword arginfo_class_URL_hasCredentials

#define arginfo_class_URL_hasPort arginfo_class_URL_hasCredentials

#define arginfo_class_URL_hasPassword arginfo_class_URL_hasCredentials

#define arginfo_class_URL_hasHash arginfo_class_URL_hasCredentials

#define arginfo_class_URL_hasSearch arginfo_class_URL_hasCredentials

#define arginfo_class_URL_getHref arginfo_class_URLSearchParams___toString

#define arginfo_class_URL_getProtocol arginfo_class_URLSearchParams___toString

#define arginfo_class_URL_getUsername arginfo_class_URLSearchParams___toString

#define arginfo_class_URL_getPassword arginfo_class_URLSearchParams___toString

#define arginfo_class_URL_getHost arginfo_class_URLSearchParams___toString

#define arginfo_class_URL_getHostname arginfo_class_URLSearchParams___toString

#define arginfo_class_URL_getPort arginfo_class_URLSearchParams___toString

#define arginfo_class_URL_getPathname arginfo_class_URLSearchParams___toString

#define arginfo_class_URL_getSearch arginfo_class_URLSearchParams___toString

#define arginfo_class_URL_getHash arginfo_class_URLSearchParams___toString

#define arginfo_class_URL_getOrigin arginfo_class_URLSearchParams___toString

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_URL_getHostType, 0, 0, HostType, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_URL_getSchemeType, 0, 0, SchemeType, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_URL_setHref, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_URL_setProtocol, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, protocol, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_URL_setUsername, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, username, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_URL_setPassword, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, password, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_URL_setHost, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, host, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_URL_setHostname, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, hostname, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_URL_setPort, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, port, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_URL_setPathname, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, pathname, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_URL_setSearch, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, search, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_URL_setHash, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, hash, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_URL_setSearchParams, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, searchParams, URLSearchParams, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_URL_clearPort arginfo_class_URLSearchParams_sort

#define arginfo_class_URL_clearHash arginfo_class_URLSearchParams_sort

#define arginfo_class_URL_clearSearch arginfo_class_URLSearchParams_sort

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_URL_parse, 0, 1, URL, 1)
	ZEND_ARG_TYPE_INFO(0, url, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, base, IS_STRING, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_URL_parseWithBase, 0, 2, URL, 1)
	ZEND_ARG_TYPE_INFO(0, url, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, base, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_URL_canParse arginfo_class_URL_setHref

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_URL_canParseWithBase, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, base, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_URL_idnaToUnicode, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, input, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_URL_idnaToAscii arginfo_class_URL_idnaToUnicode

ZEND_METHOD(URLSearchParams, __construct);
ZEND_METHOD(URLSearchParams, __toString);
ZEND_METHOD(URLSearchParams, get);
ZEND_METHOD(URLSearchParams, getAll);
ZEND_METHOD(URLSearchParams, has);
ZEND_METHOD(URLSearchParams, append);
ZEND_METHOD(URLSearchParams, set);
ZEND_METHOD(URLSearchParams, sort);
ZEND_METHOD(URLSearchParams, delete);
ZEND_METHOD(URLSearchParams, keys);
ZEND_METHOD(URLSearchParams, values);
ZEND_METHOD(URLSearchParams, entries);
ZEND_METHOD(URL, __construct);
ZEND_METHOD(URL, __toString);
ZEND_METHOD(URL, hasCredentials);
ZEND_METHOD(URL, hasEmptyHostname);
ZEND_METHOD(URL, hasHostname);
ZEND_METHOD(URL, hasNonEmptyUsername);
ZEND_METHOD(URL, hasNonEmptyPassword);
ZEND_METHOD(URL, hasPort);
ZEND_METHOD(URL, hasPassword);
ZEND_METHOD(URL, hasHash);
ZEND_METHOD(URL, hasSearch);
ZEND_METHOD(URL, getHref);
ZEND_METHOD(URL, getProtocol);
ZEND_METHOD(URL, getUsername);
ZEND_METHOD(URL, getPassword);
ZEND_METHOD(URL, getHost);
ZEND_METHOD(URL, getHostname);
ZEND_METHOD(URL, getPort);
ZEND_METHOD(URL, getPathname);
ZEND_METHOD(URL, getSearch);
ZEND_METHOD(URL, getHash);
ZEND_METHOD(URL, getOrigin);
ZEND_METHOD(URL, getHostType);
ZEND_METHOD(URL, getSchemeType);
ZEND_METHOD(URL, setHref);
ZEND_METHOD(URL, setProtocol);
ZEND_METHOD(URL, setUsername);
ZEND_METHOD(URL, setPassword);
ZEND_METHOD(URL, setHost);
ZEND_METHOD(URL, setHostname);
ZEND_METHOD(URL, setPort);
ZEND_METHOD(URL, setPathname);
ZEND_METHOD(URL, setSearch);
ZEND_METHOD(URL, setHash);
ZEND_METHOD(URL, setSearchParams);
ZEND_METHOD(URL, clearPort);
ZEND_METHOD(URL, clearHash);
ZEND_METHOD(URL, clearSearch);
ZEND_METHOD(URL, parse);
ZEND_METHOD(URL, parseWithBase);
ZEND_METHOD(URL, canParse);
ZEND_METHOD(URL, canParseWithBase);
ZEND_METHOD(URL, idnaToUnicode);
ZEND_METHOD(URL, idnaToAscii);

static const zend_function_entry class_HostType_methods[] = {
	ZEND_FE_END
};

static const zend_function_entry class_SchemeType_methods[] = {
	ZEND_FE_END
};

static const zend_function_entry class_URLSearchParams_methods[] = {
	ZEND_ME(URLSearchParams, __construct, arginfo_class_URLSearchParams___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(URLSearchParams, __toString, arginfo_class_URLSearchParams___toString, ZEND_ACC_PUBLIC)
	ZEND_ME(URLSearchParams, get, arginfo_class_URLSearchParams_get, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(URLSearchParams, getAll, arginfo_class_URLSearchParams_getAll, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(URLSearchParams, has, arginfo_class_URLSearchParams_has, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(URLSearchParams, append, arginfo_class_URLSearchParams_append, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(URLSearchParams, set, arginfo_class_URLSearchParams_set, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(URLSearchParams, sort, arginfo_class_URLSearchParams_sort, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(URLSearchParams, delete, arginfo_class_URLSearchParams_delete, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(URLSearchParams, keys, arginfo_class_URLSearchParams_keys, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(URLSearchParams, values, arginfo_class_URLSearchParams_values, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(URLSearchParams, entries, arginfo_class_URLSearchParams_entries, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_FE_END
};

static const zend_function_entry class_URL_methods[] = {
	ZEND_ME(URL, __construct, arginfo_class_URL___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(URL, __toString, arginfo_class_URL___toString, ZEND_ACC_PUBLIC)
	ZEND_ME(URL, hasCredentials, arginfo_class_URL_hasCredentials, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(URL, hasEmptyHostname, arginfo_class_URL_hasEmptyHostname, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(URL, hasHostname, arginfo_class_URL_hasHostname, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(URL, hasNonEmptyUsername, arginfo_class_URL_hasNonEmptyUsername, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(URL, hasNonEmptyPassword, arginfo_class_URL_hasNonEmptyPassword, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(URL, hasPort, arginfo_class_URL_hasPort, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(URL, hasPassword, arginfo_class_URL_hasPassword, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(URL, hasHash, arginfo_class_URL_hasHash, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(URL, hasSearch, arginfo_class_URL_hasSearch, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(URL, getHref, arginfo_class_URL_getHref, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(URL, getProtocol, arginfo_class_URL_getProtocol, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(URL, getUsername, arginfo_class_URL_getUsername, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(URL, getPassword, arginfo_class_URL_getPassword, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(URL, getHost, arginfo_class_URL_getHost, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(URL, getHostname, arginfo_class_URL_getHostname, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(URL, getPort, arginfo_class_URL_getPort, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(URL, getPathname, arginfo_class_URL_getPathname, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(URL, getSearch, arginfo_class_URL_getSearch, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(URL, getHash, arginfo_class_URL_getHash, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(URL, getOrigin, arginfo_class_URL_getOrigin, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(URL, getHostType, arginfo_class_URL_getHostType, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(URL, getSchemeType, arginfo_class_URL_getSchemeType, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(URL, setHref, arginfo_class_URL_setHref, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(URL, setProtocol, arginfo_class_URL_setProtocol, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(URL, setUsername, arginfo_class_URL_setUsername, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(URL, setPassword, arginfo_class_URL_setPassword, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(URL, setHost, arginfo_class_URL_setHost, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(URL, setHostname, arginfo_class_URL_setHostname, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(URL, setPort, arginfo_class_URL_setPort, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(URL, setPathname, arginfo_class_URL_setPathname, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(URL, setSearch, arginfo_class_URL_setSearch, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(URL, setHash, arginfo_class_URL_setHash, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(URL, setSearchParams, arginfo_class_URL_setSearchParams, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(URL, clearPort, arginfo_class_URL_clearPort, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(URL, clearHash, arginfo_class_URL_clearHash, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(URL, clearSearch, arginfo_class_URL_clearSearch, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(URL, parse, arginfo_class_URL_parse, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(URL, parseWithBase, arginfo_class_URL_parseWithBase, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(URL, canParse, arginfo_class_URL_canParse, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(URL, canParseWithBase, arginfo_class_URL_canParseWithBase, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(URL, idnaToUnicode, arginfo_class_URL_idnaToUnicode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(URL, idnaToAscii, arginfo_class_URL_idnaToAscii, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_HostType(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("HostType", IS_LONG, class_HostType_methods);

	zval enum_case_DEFAULT_value;
	ZVAL_LONG(&enum_case_DEFAULT_value, 0);
	zend_enum_add_case_cstr(class_entry, "DEFAULT", &enum_case_DEFAULT_value);

	zval enum_case_IPV4_value;
	ZVAL_LONG(&enum_case_IPV4_value, 1);
	zend_enum_add_case_cstr(class_entry, "IPV4", &enum_case_IPV4_value);

	zval enum_case_IPV6_value;
	ZVAL_LONG(&enum_case_IPV6_value, 2);
	zend_enum_add_case_cstr(class_entry, "IPV6", &enum_case_IPV6_value);

	return class_entry;
}

static zend_class_entry *register_class_SchemeType(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("SchemeType", IS_LONG, class_SchemeType_methods);

	zval enum_case_HTTP_value;
	ZVAL_LONG(&enum_case_HTTP_value, 0);
	zend_enum_add_case_cstr(class_entry, "HTTP", &enum_case_HTTP_value);

	zval enum_case_NOT_SPECIAL_value;
	ZVAL_LONG(&enum_case_NOT_SPECIAL_value, 1);
	zend_enum_add_case_cstr(class_entry, "NOT_SPECIAL", &enum_case_NOT_SPECIAL_value);

	zval enum_case_HTTPS_value;
	ZVAL_LONG(&enum_case_HTTPS_value, 2);
	zend_enum_add_case_cstr(class_entry, "HTTPS", &enum_case_HTTPS_value);

	zval enum_case_WS_value;
	ZVAL_LONG(&enum_case_WS_value, 3);
	zend_enum_add_case_cstr(class_entry, "WS", &enum_case_WS_value);

	zval enum_case_FTP_value;
	ZVAL_LONG(&enum_case_FTP_value, 4);
	zend_enum_add_case_cstr(class_entry, "FTP", &enum_case_FTP_value);

	zval enum_case_WSS_value;
	ZVAL_LONG(&enum_case_WSS_value, 5);
	zend_enum_add_case_cstr(class_entry, "WSS", &enum_case_WSS_value);

	zval enum_case_FILE_value;
	ZVAL_LONG(&enum_case_FILE_value, 6);
	zend_enum_add_case_cstr(class_entry, "FILE", &enum_case_FILE_value);

	return class_entry;
}

static zend_class_entry *register_class_URLSearchParams(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "URLSearchParams", class_URLSearchParams_methods);
	class_entry = zend_register_internal_class_ex(&ce, NULL);

	return class_entry;
}

static zend_class_entry *register_class_URL(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "URL", class_URL_methods);
	class_entry = zend_register_internal_class_ex(&ce, NULL);

	return class_entry;
}
