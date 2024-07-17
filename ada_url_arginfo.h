/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: b01f3efd437d437d2776771c5a0272c808aead3c */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_AdaUrl_URLSearchParams___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, init, IS_STRING, 0, "\"\"")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AdaUrl_URLSearchParams___toString, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AdaUrl_URLSearchParams_get, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AdaUrl_URLSearchParams_getAll, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AdaUrl_URLSearchParams_has, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AdaUrl_URLSearchParams_append, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_AdaUrl_URLSearchParams_set arginfo_class_AdaUrl_URLSearchParams_append

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AdaUrl_URLSearchParams_sort, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AdaUrl_URLSearchParams_delete, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AdaUrl_URLSearchParams_keys, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_AdaUrl_URLSearchParams_values arginfo_class_AdaUrl_URLSearchParams_keys

#define arginfo_class_AdaUrl_URLSearchParams_entries arginfo_class_AdaUrl_URLSearchParams_keys

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_AdaUrl_URL___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, url, IS_STRING, 0, "\"\"")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, base, IS_STRING, 1, "null")
ZEND_END_ARG_INFO()

#define arginfo_class_AdaUrl_URL___toString arginfo_class_AdaUrl_URLSearchParams___toString

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AdaUrl_URL_hasCredentials, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_AdaUrl_URL_hasEmptyHostname arginfo_class_AdaUrl_URL_hasCredentials

#define arginfo_class_AdaUrl_URL_hasHostname arginfo_class_AdaUrl_URL_hasCredentials

#define arginfo_class_AdaUrl_URL_hasNonEmptyUsername arginfo_class_AdaUrl_URL_hasCredentials

#define arginfo_class_AdaUrl_URL_hasNonEmptyPassword arginfo_class_AdaUrl_URL_hasCredentials

#define arginfo_class_AdaUrl_URL_hasPort arginfo_class_AdaUrl_URL_hasCredentials

#define arginfo_class_AdaUrl_URL_hasPassword arginfo_class_AdaUrl_URL_hasCredentials

#define arginfo_class_AdaUrl_URL_hasHash arginfo_class_AdaUrl_URL_hasCredentials

#define arginfo_class_AdaUrl_URL_hasSearch arginfo_class_AdaUrl_URL_hasCredentials

#define arginfo_class_AdaUrl_URL_getHref arginfo_class_AdaUrl_URLSearchParams___toString

#define arginfo_class_AdaUrl_URL_getProtocol arginfo_class_AdaUrl_URLSearchParams___toString

#define arginfo_class_AdaUrl_URL_getUsername arginfo_class_AdaUrl_URLSearchParams___toString

#define arginfo_class_AdaUrl_URL_getPassword arginfo_class_AdaUrl_URLSearchParams___toString

#define arginfo_class_AdaUrl_URL_getHost arginfo_class_AdaUrl_URLSearchParams___toString

#define arginfo_class_AdaUrl_URL_getHostname arginfo_class_AdaUrl_URLSearchParams___toString

#define arginfo_class_AdaUrl_URL_getPort arginfo_class_AdaUrl_URLSearchParams___toString

#define arginfo_class_AdaUrl_URL_getPathname arginfo_class_AdaUrl_URLSearchParams___toString

#define arginfo_class_AdaUrl_URL_getSearch arginfo_class_AdaUrl_URLSearchParams___toString

#define arginfo_class_AdaUrl_URL_getHash arginfo_class_AdaUrl_URLSearchParams___toString

#define arginfo_class_AdaUrl_URL_getOrigin arginfo_class_AdaUrl_URLSearchParams___toString

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_AdaUrl_URL_getHostType, 0, 0, AdaUrl\\HostType, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_AdaUrl_URL_getSchemeType, 0, 0, AdaUrl\\SchemeType, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AdaUrl_URL_setHref, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AdaUrl_URL_setProtocol, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, protocol, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AdaUrl_URL_setUsername, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, username, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AdaUrl_URL_setPassword, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, password, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AdaUrl_URL_setHost, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, host, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AdaUrl_URL_setHostname, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, hostname, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AdaUrl_URL_setPort, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, port, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AdaUrl_URL_setPathname, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, pathname, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AdaUrl_URL_setSearch, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, search, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AdaUrl_URL_setHash, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, hash, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AdaUrl_URL_setSearchParams, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, searchParams, AdaUrl\\\125RLSearchParams, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_AdaUrl_URL_clearPort arginfo_class_AdaUrl_URLSearchParams_sort

#define arginfo_class_AdaUrl_URL_clearHash arginfo_class_AdaUrl_URLSearchParams_sort

#define arginfo_class_AdaUrl_URL_clearSearch arginfo_class_AdaUrl_URLSearchParams_sort

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_AdaUrl_URL_parse, 0, 1, AdaUrl\\\125RL, 1)
	ZEND_ARG_TYPE_INFO(0, url, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, base, IS_STRING, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_AdaUrl_URL_parseWithBase, 0, 2, AdaUrl\\\125RL, 1)
	ZEND_ARG_TYPE_INFO(0, url, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, base, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_AdaUrl_URL_canParse arginfo_class_AdaUrl_URL_setHref

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AdaUrl_URL_canParseWithBase, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, base, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AdaUrl_URL_idnaToUnicode, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, input, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_AdaUrl_URL_idnaToAscii arginfo_class_AdaUrl_URL_idnaToUnicode

ZEND_METHOD(AdaUrl_URLSearchParams, __construct);
ZEND_METHOD(AdaUrl_URLSearchParams, __toString);
ZEND_METHOD(AdaUrl_URLSearchParams, get);
ZEND_METHOD(AdaUrl_URLSearchParams, getAll);
ZEND_METHOD(AdaUrl_URLSearchParams, has);
ZEND_METHOD(AdaUrl_URLSearchParams, append);
ZEND_METHOD(AdaUrl_URLSearchParams, set);
ZEND_METHOD(AdaUrl_URLSearchParams, sort);
ZEND_METHOD(AdaUrl_URLSearchParams, delete);
ZEND_METHOD(AdaUrl_URLSearchParams, keys);
ZEND_METHOD(AdaUrl_URLSearchParams, values);
ZEND_METHOD(AdaUrl_URLSearchParams, entries);
ZEND_METHOD(AdaUrl_URL, __construct);
ZEND_METHOD(AdaUrl_URL, __toString);
ZEND_METHOD(AdaUrl_URL, hasCredentials);
ZEND_METHOD(AdaUrl_URL, hasEmptyHostname);
ZEND_METHOD(AdaUrl_URL, hasHostname);
ZEND_METHOD(AdaUrl_URL, hasNonEmptyUsername);
ZEND_METHOD(AdaUrl_URL, hasNonEmptyPassword);
ZEND_METHOD(AdaUrl_URL, hasPort);
ZEND_METHOD(AdaUrl_URL, hasPassword);
ZEND_METHOD(AdaUrl_URL, hasHash);
ZEND_METHOD(AdaUrl_URL, hasSearch);
ZEND_METHOD(AdaUrl_URL, getHref);
ZEND_METHOD(AdaUrl_URL, getProtocol);
ZEND_METHOD(AdaUrl_URL, getUsername);
ZEND_METHOD(AdaUrl_URL, getPassword);
ZEND_METHOD(AdaUrl_URL, getHost);
ZEND_METHOD(AdaUrl_URL, getHostname);
ZEND_METHOD(AdaUrl_URL, getPort);
ZEND_METHOD(AdaUrl_URL, getPathname);
ZEND_METHOD(AdaUrl_URL, getSearch);
ZEND_METHOD(AdaUrl_URL, getHash);
ZEND_METHOD(AdaUrl_URL, getOrigin);
ZEND_METHOD(AdaUrl_URL, getHostType);
ZEND_METHOD(AdaUrl_URL, getSchemeType);
ZEND_METHOD(AdaUrl_URL, setHref);
ZEND_METHOD(AdaUrl_URL, setProtocol);
ZEND_METHOD(AdaUrl_URL, setUsername);
ZEND_METHOD(AdaUrl_URL, setPassword);
ZEND_METHOD(AdaUrl_URL, setHost);
ZEND_METHOD(AdaUrl_URL, setHostname);
ZEND_METHOD(AdaUrl_URL, setPort);
ZEND_METHOD(AdaUrl_URL, setPathname);
ZEND_METHOD(AdaUrl_URL, setSearch);
ZEND_METHOD(AdaUrl_URL, setHash);
ZEND_METHOD(AdaUrl_URL, setSearchParams);
ZEND_METHOD(AdaUrl_URL, clearPort);
ZEND_METHOD(AdaUrl_URL, clearHash);
ZEND_METHOD(AdaUrl_URL, clearSearch);
ZEND_METHOD(AdaUrl_URL, parse);
ZEND_METHOD(AdaUrl_URL, parseWithBase);
ZEND_METHOD(AdaUrl_URL, canParse);
ZEND_METHOD(AdaUrl_URL, canParseWithBase);
ZEND_METHOD(AdaUrl_URL, idnaToUnicode);
ZEND_METHOD(AdaUrl_URL, idnaToAscii);

static const zend_function_entry class_AdaUrl_HostType_methods[] = {
	ZEND_FE_END
};

static const zend_function_entry class_AdaUrl_SchemeType_methods[] = {
	ZEND_FE_END
};

static const zend_function_entry class_AdaUrl_URLSearchParams_methods[] = {
	ZEND_ME(AdaUrl_URLSearchParams, __construct, arginfo_class_AdaUrl_URLSearchParams___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(AdaUrl_URLSearchParams, __toString, arginfo_class_AdaUrl_URLSearchParams___toString, ZEND_ACC_PUBLIC)
	ZEND_ME(AdaUrl_URLSearchParams, get, arginfo_class_AdaUrl_URLSearchParams_get, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaUrl_URLSearchParams, getAll, arginfo_class_AdaUrl_URLSearchParams_getAll, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaUrl_URLSearchParams, has, arginfo_class_AdaUrl_URLSearchParams_has, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaUrl_URLSearchParams, append, arginfo_class_AdaUrl_URLSearchParams_append, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaUrl_URLSearchParams, set, arginfo_class_AdaUrl_URLSearchParams_set, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaUrl_URLSearchParams, sort, arginfo_class_AdaUrl_URLSearchParams_sort, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaUrl_URLSearchParams, delete, arginfo_class_AdaUrl_URLSearchParams_delete, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaUrl_URLSearchParams, keys, arginfo_class_AdaUrl_URLSearchParams_keys, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaUrl_URLSearchParams, values, arginfo_class_AdaUrl_URLSearchParams_values, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaUrl_URLSearchParams, entries, arginfo_class_AdaUrl_URLSearchParams_entries, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_FE_END
};

static const zend_function_entry class_AdaUrl_URL_methods[] = {
	ZEND_ME(AdaUrl_URL, __construct, arginfo_class_AdaUrl_URL___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(AdaUrl_URL, __toString, arginfo_class_AdaUrl_URL___toString, ZEND_ACC_PUBLIC)
	ZEND_ME(AdaUrl_URL, hasCredentials, arginfo_class_AdaUrl_URL_hasCredentials, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaUrl_URL, hasEmptyHostname, arginfo_class_AdaUrl_URL_hasEmptyHostname, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaUrl_URL, hasHostname, arginfo_class_AdaUrl_URL_hasHostname, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaUrl_URL, hasNonEmptyUsername, arginfo_class_AdaUrl_URL_hasNonEmptyUsername, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaUrl_URL, hasNonEmptyPassword, arginfo_class_AdaUrl_URL_hasNonEmptyPassword, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaUrl_URL, hasPort, arginfo_class_AdaUrl_URL_hasPort, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaUrl_URL, hasPassword, arginfo_class_AdaUrl_URL_hasPassword, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaUrl_URL, hasHash, arginfo_class_AdaUrl_URL_hasHash, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaUrl_URL, hasSearch, arginfo_class_AdaUrl_URL_hasSearch, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaUrl_URL, getHref, arginfo_class_AdaUrl_URL_getHref, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaUrl_URL, getProtocol, arginfo_class_AdaUrl_URL_getProtocol, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaUrl_URL, getUsername, arginfo_class_AdaUrl_URL_getUsername, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaUrl_URL, getPassword, arginfo_class_AdaUrl_URL_getPassword, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaUrl_URL, getHost, arginfo_class_AdaUrl_URL_getHost, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaUrl_URL, getHostname, arginfo_class_AdaUrl_URL_getHostname, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaUrl_URL, getPort, arginfo_class_AdaUrl_URL_getPort, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaUrl_URL, getPathname, arginfo_class_AdaUrl_URL_getPathname, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaUrl_URL, getSearch, arginfo_class_AdaUrl_URL_getSearch, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaUrl_URL, getHash, arginfo_class_AdaUrl_URL_getHash, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaUrl_URL, getOrigin, arginfo_class_AdaUrl_URL_getOrigin, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaUrl_URL, getHostType, arginfo_class_AdaUrl_URL_getHostType, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaUrl_URL, getSchemeType, arginfo_class_AdaUrl_URL_getSchemeType, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaUrl_URL, setHref, arginfo_class_AdaUrl_URL_setHref, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaUrl_URL, setProtocol, arginfo_class_AdaUrl_URL_setProtocol, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaUrl_URL, setUsername, arginfo_class_AdaUrl_URL_setUsername, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaUrl_URL, setPassword, arginfo_class_AdaUrl_URL_setPassword, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaUrl_URL, setHost, arginfo_class_AdaUrl_URL_setHost, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaUrl_URL, setHostname, arginfo_class_AdaUrl_URL_setHostname, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaUrl_URL, setPort, arginfo_class_AdaUrl_URL_setPort, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaUrl_URL, setPathname, arginfo_class_AdaUrl_URL_setPathname, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaUrl_URL, setSearch, arginfo_class_AdaUrl_URL_setSearch, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaUrl_URL, setHash, arginfo_class_AdaUrl_URL_setHash, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaUrl_URL, setSearchParams, arginfo_class_AdaUrl_URL_setSearchParams, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaUrl_URL, clearPort, arginfo_class_AdaUrl_URL_clearPort, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaUrl_URL, clearHash, arginfo_class_AdaUrl_URL_clearHash, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaUrl_URL, clearSearch, arginfo_class_AdaUrl_URL_clearSearch, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaUrl_URL, parse, arginfo_class_AdaUrl_URL_parse, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(AdaUrl_URL, parseWithBase, arginfo_class_AdaUrl_URL_parseWithBase, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(AdaUrl_URL, canParse, arginfo_class_AdaUrl_URL_canParse, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(AdaUrl_URL, canParseWithBase, arginfo_class_AdaUrl_URL_canParseWithBase, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(AdaUrl_URL, idnaToUnicode, arginfo_class_AdaUrl_URL_idnaToUnicode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(AdaUrl_URL, idnaToAscii, arginfo_class_AdaUrl_URL_idnaToAscii, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_AdaUrl_HostType(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("AdaUrl\\HostType", IS_LONG, class_AdaUrl_HostType_methods);

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

static zend_class_entry *register_class_AdaUrl_SchemeType(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("AdaUrl\\SchemeType", IS_LONG, class_AdaUrl_SchemeType_methods);

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

static zend_class_entry *register_class_AdaUrl_URLSearchParams(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "AdaUrl", "URLSearchParams", class_AdaUrl_URLSearchParams_methods);
	class_entry = zend_register_internal_class_ex(&ce, NULL);

	return class_entry;
}

static zend_class_entry *register_class_AdaUrl_URL(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "AdaUrl", "URL", class_AdaUrl_URL_methods);
	class_entry = zend_register_internal_class_ex(&ce, NULL);

	return class_entry;
}
