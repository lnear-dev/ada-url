--TEST--
URLSearchParams Class - append Method
--DESCRIPTION--
Test if the append method correctly adds a new key-value pair.
--FILE--
<?php
namespace AdaUrl;
$params = new URLSearchParams("key1=value1");
$params->append("key2", "value2");
echo $params;
?>
--EXPECT--
key1=value1&key2=value2
