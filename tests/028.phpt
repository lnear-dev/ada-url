--TEST--
URLSearchParams Class - Constructor and String Representation
--DESCRIPTION--
Test if the URLSearchParams class constructs correctly and converts to string.
--FILE--
<?php
namespace AdaURL;
$params = new URLSearchParams("key1=value1&key2=value2&key3=value3");
echo $params;
?>
--EXPECT--
key1=value1&key2=value2&key3=value3
