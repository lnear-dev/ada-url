--TEST--
URLSearchParams Class - get Method for Non-Existent Key
--DESCRIPTION--
Test if the get method returns null for a non-existent key.
--FILE--
<?php
$params = new URLSearchParams("key1=value1&key2=value2");
var_dump($params->get("key3"));
?>
--EXPECT--
NULL
