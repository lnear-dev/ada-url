--TEST--
URLSearchParams Class - append Method with Existing Key
--DESCRIPTION--
Test if the append method correctly adds another value to an existing key.
--FILE--
<?php
namespace AdaURL;
$params = new URLSearchParams("key1=value1");
$params->append("key1", "value2");
echo $params;
?>
--EXPECT--
key1=value1&key1=value2
