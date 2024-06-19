--TEST--
URLSearchParams Class - delete Method
--DESCRIPTION--
Test if the delete method correctly removes the key-value pair.
--FILE--
<?php
$params = new URLSearchParams("key1=value1&key2=value2");
$params->delete("key1");
echo $params;
?>
--EXPECT--
key2=value2
