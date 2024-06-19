--TEST--
URLSearchParams Class - set Method
--DESCRIPTION--
Test if the set method correctly sets the value for a key, replacing existing values.
--FILE--
<?php
$params = new URLSearchParams("key1=value1&key1=value2");
$params->set("key1", "newvalue");
echo $params;
?>
--EXPECT--
key1=newvalue
