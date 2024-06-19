--TEST--
URLSearchParams Class - Multiple Methods
--DESCRIPTION--
Test the combined functionality of multiple methods.
--FILE--
<?php
$params = new URLSearchParams("key1=value1&key2=value2");
$params->append("key2", "value3");
$params->set("key3", "value4");
$params->delete("key1");
$params->sort();
echo $params;
?>
--EXPECT--
key2=value2&key2=value3&key3=value4
