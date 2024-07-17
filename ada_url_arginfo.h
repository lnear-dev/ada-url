/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 12d0721a889024db8f04acc4d5e1f0737da0b63d */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_AdaURL_URLSearchParams___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, init, IS_STRING, 0, "\"\"")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AdaURL_URLSearchParams___toString, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AdaURL_URLSearchParams_get, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AdaURL_URLSearchParams_getAll, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AdaURL_URLSearchParams_has, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AdaURL_URLSearchParams_append, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_AdaURL_URLSearchParams_set arginfo_class_AdaURL_URLSearchParams_append

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AdaURL_URLSearchParams_sort, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AdaURL_URLSearchParams_delete, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AdaURL_URLSearchParams_keys, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_AdaURL_URLSearchParams_values arginfo_class_AdaURL_URLSearchParams_keys

#define arginfo_class_AdaURL_URLSearchParams_entries arginfo_class_AdaURL_URLSearchParams_keys

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AdaURL_URLSearchParams_offsetExists, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, offset, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AdaURL_URLSearchParams_offsetGet, 0, 1, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, offset, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AdaURL_URLSearchParams_offsetSet, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, offset, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AdaURL_URLSearchParams_offsetUnset, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, offset, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AdaURL_URLSearchParams_count, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_AdaURL_URL___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, url, IS_STRING, 0, "\"\"")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, base, IS_STRING, 1, "null")
ZEND_END_ARG_INFO()

#define arginfo_class_AdaURL_URL___toString arginfo_class_AdaURL_URLSearchParams___toString

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AdaURL_URL_hasCredentials, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_AdaURL_URL_hasEmptyHostname arginfo_class_AdaURL_URL_hasCredentials

#define arginfo_class_AdaURL_URL_hasHostname arginfo_class_AdaURL_URL_hasCredentials

#define arginfo_class_AdaURL_URL_hasNonEmptyUsername arginfo_class_AdaURL_URL_hasCredentials

#define arginfo_class_AdaURL_URL_hasNonEmptyPassword arginfo_class_AdaURL_URL_hasCredentials

#define arginfo_class_AdaURL_URL_hasPort arginfo_class_AdaURL_URL_hasCredentials

#define arginfo_class_AdaURL_URL_hasPassword arginfo_class_AdaURL_URL_hasCredentials

#define arginfo_class_AdaURL_URL_hasHash arginfo_class_AdaURL_URL_hasCredentials

#define arginfo_class_AdaURL_URL_hasSearch arginfo_class_AdaURL_URL_hasCredentials

#define arginfo_class_AdaURL_URL_getHref arginfo_class_AdaURL_URLSearchParams___toString

#define arginfo_class_AdaURL_URL_getProtocol arginfo_class_AdaURL_URLSearchParams___toString

#define arginfo_class_AdaURL_URL_getUsername arginfo_class_AdaURL_URLSearchParams___toString

#define arginfo_class_AdaURL_URL_getPassword arginfo_class_AdaURL_URLSearchParams___toString

#define arginfo_class_AdaURL_URL_getHost arginfo_class_AdaURL_URLSearchParams___toString

#define arginfo_class_AdaURL_URL_getHostname arginfo_class_AdaURL_URLSearchParams___toString

#define arginfo_class_AdaURL_URL_getPort arginfo_class_AdaURL_URLSearchParams___toString

#define arginfo_class_AdaURL_URL_getPathname arginfo_class_AdaURL_URLSearchParams___toString

#define arginfo_class_AdaURL_URL_getSearch arginfo_class_AdaURL_URLSearchParams___toString

#define arginfo_class_AdaURL_URL_getHash arginfo_class_AdaURL_URLSearchParams___toString

#define arginfo_class_AdaURL_URL_getOrigin arginfo_class_AdaURL_URLSearchParams___toString

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_AdaURL_URL_getHostType, 0, 0, AdaURL\\HostType, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_AdaURL_URL_getSchemeType, 0, 0, AdaURL\\SchemeType, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AdaURL_URL_setHref, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AdaURL_URL_setProtocol, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, protocol, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AdaURL_URL_setUsername, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, username, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AdaURL_URL_setPassword, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, password, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AdaURL_URL_setHost, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, host, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AdaURL_URL_setHostname, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, hostname, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AdaURL_URL_setPort, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, port, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AdaURL_URL_setPathname, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, pathname, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AdaURL_URL_setSearch, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, search, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AdaURL_URL_setHash, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, hash, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AdaURL_URL_setSearchParams, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, searchParams, AdaURL\\\125RLSearchParams, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_AdaURL_URL_clearPort arginfo_class_AdaURL_URLSearchParams_sort

#define arginfo_class_AdaURL_URL_clearHash arginfo_class_AdaURL_URLSearchParams_sort

#define arginfo_class_AdaURL_URL_clearSearch arginfo_class_AdaURL_URLSearchParams_sort

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_AdaURL_URL_parse, 0, 1, AdaURL\\\125RL, 1)
	ZEND_ARG_TYPE_INFO(0, url, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, base, IS_STRING, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_AdaURL_URL_parseWithBase, 0, 2, AdaURL\\\125RL, 1)
	ZEND_ARG_TYPE_INFO(0, url, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, base, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_AdaURL_URL_canParse arginfo_class_AdaURL_URL_setHref

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AdaURL_URL_canParseWithBase, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, base, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AdaURL_URL_idnaToUnicode, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, input, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_AdaURL_URL_idnaToAscii arginfo_class_AdaURL_URL_idnaToUnicode

ZEND_METHOD(AdaURL_URLSearchParams, __construct);
ZEND_METHOD(AdaURL_URLSearchParams, __toString);
ZEND_METHOD(AdaURL_URLSearchParams, get);
ZEND_METHOD(AdaURL_URLSearchParams, getAll);
ZEND_METHOD(AdaURL_URLSearchParams, has);
ZEND_METHOD(AdaURL_URLSearchParams, append);
ZEND_METHOD(AdaURL_URLSearchParams, set);
ZEND_METHOD(AdaURL_URLSearchParams, sort);
ZEND_METHOD(AdaURL_URLSearchParams, delete);
ZEND_METHOD(AdaURL_URLSearchParams, keys);
ZEND_METHOD(AdaURL_URLSearchParams, values);
ZEND_METHOD(AdaURL_URLSearchParams, entries);
ZEND_METHOD(AdaURL_URLSearchParams, offsetExists);
ZEND_METHOD(AdaURL_URLSearchParams, offsetGet);
ZEND_METHOD(AdaURL_URLSearchParams, offsetSet);
ZEND_METHOD(AdaURL_URLSearchParams, offsetUnset);
ZEND_METHOD(AdaURL_URLSearchParams, count);
ZEND_METHOD(AdaURL_URL, __construct);
ZEND_METHOD(AdaURL_URL, __toString);
ZEND_METHOD(AdaURL_URL, hasCredentials);
ZEND_METHOD(AdaURL_URL, hasEmptyHostname);
ZEND_METHOD(AdaURL_URL, hasHostname);
ZEND_METHOD(AdaURL_URL, hasNonEmptyUsername);
ZEND_METHOD(AdaURL_URL, hasNonEmptyPassword);
ZEND_METHOD(AdaURL_URL, hasPort);
ZEND_METHOD(AdaURL_URL, hasPassword);
ZEND_METHOD(AdaURL_URL, hasHash);
ZEND_METHOD(AdaURL_URL, hasSearch);
ZEND_METHOD(AdaURL_URL, getHref);
ZEND_METHOD(AdaURL_URL, getProtocol);
ZEND_METHOD(AdaURL_URL, getUsername);
ZEND_METHOD(AdaURL_URL, getPassword);
ZEND_METHOD(AdaURL_URL, getHost);
ZEND_METHOD(AdaURL_URL, getHostname);
ZEND_METHOD(AdaURL_URL, getPort);
ZEND_METHOD(AdaURL_URL, getPathname);
ZEND_METHOD(AdaURL_URL, getSearch);
ZEND_METHOD(AdaURL_URL, getHash);
ZEND_METHOD(AdaURL_URL, getOrigin);
ZEND_METHOD(AdaURL_URL, getHostType);
ZEND_METHOD(AdaURL_URL, getSchemeType);
ZEND_METHOD(AdaURL_URL, setHref);
ZEND_METHOD(AdaURL_URL, setProtocol);
ZEND_METHOD(AdaURL_URL, setUsername);
ZEND_METHOD(AdaURL_URL, setPassword);
ZEND_METHOD(AdaURL_URL, setHost);
ZEND_METHOD(AdaURL_URL, setHostname);
ZEND_METHOD(AdaURL_URL, setPort);
ZEND_METHOD(AdaURL_URL, setPathname);
ZEND_METHOD(AdaURL_URL, setSearch);
ZEND_METHOD(AdaURL_URL, setHash);
ZEND_METHOD(AdaURL_URL, setSearchParams);
ZEND_METHOD(AdaURL_URL, clearPort);
ZEND_METHOD(AdaURL_URL, clearHash);
ZEND_METHOD(AdaURL_URL, clearSearch);
ZEND_METHOD(AdaURL_URL, parse);
ZEND_METHOD(AdaURL_URL, parseWithBase);
ZEND_METHOD(AdaURL_URL, canParse);
ZEND_METHOD(AdaURL_URL, canParseWithBase);
ZEND_METHOD(AdaURL_URL, idnaToUnicode);
ZEND_METHOD(AdaURL_URL, idnaToAscii);

static const zend_function_entry class_AdaURL_HostType_methods[] = {
	ZEND_FE_END
};

static const zend_function_entry class_AdaURL_SchemeType_methods[] = {
	ZEND_FE_END
};

static const zend_function_entry class_AdaURL_URLSearchParams_methods[] = {
	ZEND_ME(AdaURL_URLSearchParams, __construct, arginfo_class_AdaURL_URLSearchParams___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(AdaURL_URLSearchParams, __toString, arginfo_class_AdaURL_URLSearchParams___toString, ZEND_ACC_PUBLIC)
	ZEND_ME(AdaURL_URLSearchParams, get, arginfo_class_AdaURL_URLSearchParams_get, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaURL_URLSearchParams, getAll, arginfo_class_AdaURL_URLSearchParams_getAll, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaURL_URLSearchParams, has, arginfo_class_AdaURL_URLSearchParams_has, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaURL_URLSearchParams, append, arginfo_class_AdaURL_URLSearchParams_append, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaURL_URLSearchParams, set, arginfo_class_AdaURL_URLSearchParams_set, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaURL_URLSearchParams, sort, arginfo_class_AdaURL_URLSearchParams_sort, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaURL_URLSearchParams, delete, arginfo_class_AdaURL_URLSearchParams_delete, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaURL_URLSearchParams, keys, arginfo_class_AdaURL_URLSearchParams_keys, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaURL_URLSearchParams, values, arginfo_class_AdaURL_URLSearchParams_values, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaURL_URLSearchParams, entries, arginfo_class_AdaURL_URLSearchParams_entries, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaURL_URLSearchParams, offsetExists, arginfo_class_AdaURL_URLSearchParams_offsetExists, ZEND_ACC_PUBLIC)
	ZEND_ME(AdaURL_URLSearchParams, offsetGet, arginfo_class_AdaURL_URLSearchParams_offsetGet, ZEND_ACC_PUBLIC)
	ZEND_ME(AdaURL_URLSearchParams, offsetSet, arginfo_class_AdaURL_URLSearchParams_offsetSet, ZEND_ACC_PUBLIC)
	ZEND_ME(AdaURL_URLSearchParams, offsetUnset, arginfo_class_AdaURL_URLSearchParams_offsetUnset, ZEND_ACC_PUBLIC)
	ZEND_ME(AdaURL_URLSearchParams, count, arginfo_class_AdaURL_URLSearchParams_count, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_AdaURL_URL_methods[] = {
	ZEND_ME(AdaURL_URL, __construct, arginfo_class_AdaURL_URL___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(AdaURL_URL, __toString, arginfo_class_AdaURL_URL___toString, ZEND_ACC_PUBLIC)
	ZEND_ME(AdaURL_URL, hasCredentials, arginfo_class_AdaURL_URL_hasCredentials, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaURL_URL, hasEmptyHostname, arginfo_class_AdaURL_URL_hasEmptyHostname, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaURL_URL, hasHostname, arginfo_class_AdaURL_URL_hasHostname, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaURL_URL, hasNonEmptyUsername, arginfo_class_AdaURL_URL_hasNonEmptyUsername, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaURL_URL, hasNonEmptyPassword, arginfo_class_AdaURL_URL_hasNonEmptyPassword, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaURL_URL, hasPort, arginfo_class_AdaURL_URL_hasPort, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaURL_URL, hasPassword, arginfo_class_AdaURL_URL_hasPassword, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaURL_URL, hasHash, arginfo_class_AdaURL_URL_hasHash, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaURL_URL, hasSearch, arginfo_class_AdaURL_URL_hasSearch, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaURL_URL, getHref, arginfo_class_AdaURL_URL_getHref, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaURL_URL, getProtocol, arginfo_class_AdaURL_URL_getProtocol, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaURL_URL, getUsername, arginfo_class_AdaURL_URL_getUsername, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaURL_URL, getPassword, arginfo_class_AdaURL_URL_getPassword, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaURL_URL, getHost, arginfo_class_AdaURL_URL_getHost, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaURL_URL, getHostname, arginfo_class_AdaURL_URL_getHostname, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaURL_URL, getPort, arginfo_class_AdaURL_URL_getPort, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaURL_URL, getPathname, arginfo_class_AdaURL_URL_getPathname, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaURL_URL, getSearch, arginfo_class_AdaURL_URL_getSearch, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaURL_URL, getHash, arginfo_class_AdaURL_URL_getHash, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaURL_URL, getOrigin, arginfo_class_AdaURL_URL_getOrigin, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaURL_URL, getHostType, arginfo_class_AdaURL_URL_getHostType, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaURL_URL, getSchemeType, arginfo_class_AdaURL_URL_getSchemeType, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaURL_URL, setHref, arginfo_class_AdaURL_URL_setHref, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaURL_URL, setProtocol, arginfo_class_AdaURL_URL_setProtocol, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaURL_URL, setUsername, arginfo_class_AdaURL_URL_setUsername, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaURL_URL, setPassword, arginfo_class_AdaURL_URL_setPassword, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaURL_URL, setHost, arginfo_class_AdaURL_URL_setHost, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaURL_URL, setHostname, arginfo_class_AdaURL_URL_setHostname, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaURL_URL, setPort, arginfo_class_AdaURL_URL_setPort, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaURL_URL, setPathname, arginfo_class_AdaURL_URL_setPathname, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaURL_URL, setSearch, arginfo_class_AdaURL_URL_setSearch, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaURL_URL, setHash, arginfo_class_AdaURL_URL_setHash, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaURL_URL, setSearchParams, arginfo_class_AdaURL_URL_setSearchParams, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaURL_URL, clearPort, arginfo_class_AdaURL_URL_clearPort, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaURL_URL, clearHash, arginfo_class_AdaURL_URL_clearHash, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaURL_URL, clearSearch, arginfo_class_AdaURL_URL_clearSearch, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(AdaURL_URL, parse, arginfo_class_AdaURL_URL_parse, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(AdaURL_URL, parseWithBase, arginfo_class_AdaURL_URL_parseWithBase, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(AdaURL_URL, canParse, arginfo_class_AdaURL_URL_canParse, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(AdaURL_URL, canParseWithBase, arginfo_class_AdaURL_URL_canParseWithBase, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(AdaURL_URL, idnaToUnicode, arginfo_class_AdaURL_URL_idnaToUnicode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(AdaURL_URL, idnaToAscii, arginfo_class_AdaURL_URL_idnaToAscii, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_AdaURL_HostType(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("AdaURL\\HostType", IS_LONG, class_AdaURL_HostType_methods);

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

static zend_class_entry *register_class_AdaURL_SchemeType(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("AdaURL\\SchemeType", IS_LONG, class_AdaURL_SchemeType_methods);

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

static zend_class_entry *register_class_AdaURL_URLSearchParams(zend_class_entry *class_entry_ArrayAccess, zend_class_entry *class_entry_Countable)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "AdaURL", "URLSearchParams", class_AdaURL_URLSearchParams_methods);
	class_entry = zend_register_internal_class_ex(&ce, NULL);
	zend_class_implements(class_entry, 2, class_entry_ArrayAccess, class_entry_Countable);

	return class_entry;
}

static zend_class_entry *register_class_AdaURL_URL(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "AdaURL", "URL", class_AdaURL_URL_methods);
	class_entry = zend_register_internal_class_ex(&ce, NULL);

	return class_entry;
}
