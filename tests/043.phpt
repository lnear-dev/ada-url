--TEST--
URLSearchParams Class - toString Method
--DESCRIPTION--
Test if the toString method correctly converts the parameters to a query string.
--FILE--
<?php
namespace AdaURL;
$params = new URLSearchParams("key1=value1&key2=value2");
echo $params->__toString();
?>
--EXPECT--
key1=value1&key2=value2
