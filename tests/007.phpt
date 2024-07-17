--TEST--
URL Class - Static Methods canParse and canParseWithBase
--DESCRIPTION--
Test if the canParse and canParseWithBase static methods work correctly.
--FILE--
<?php
namespace AdaURL;
var_dump(URL::canParse("https://example.com"));
var_dump(URL::canParse("ht/tp://example.com"));

var_dump(URL::canParseWithBase("/path", "https://example.com"));
var_dump(URL::canParseWithBase("/path", "ht/tp://example.com"));
?>
--EXPECT--
bool(true)
bool(false)
bool(true)
bool(false)
