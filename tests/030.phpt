--TEST--
URLSearchParams Class - get Method
--DESCRIPTION--
Test if the get method correctly retrieves the value for a given key.
--FILE--
<?php
$params = new URLSearchParams("key1=value1&key2=value2");
echo $params->get("key1");
?>
--EXPECT--
value1
