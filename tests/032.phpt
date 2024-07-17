--TEST--
URLSearchParams Class - has Method
--DESCRIPTION--
Test if the has method correctly checks for the existence of a key.
--FILE--
<?php
namespace AdaUrl;
$params = new URLSearchParams("key1=value1&key2=value2");
var_dump($params->has("key1"));
var_dump($params->has("key3"));
?>
--EXPECT--
bool(true)
bool(false)
