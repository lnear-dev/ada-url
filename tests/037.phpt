--TEST--
URLSearchParams Class - keys Method
--DESCRIPTION--
Test if the keys method correctly returns all the keys.
--FILE--
<?php
$params = new URLSearchParams("key1=value1&key2=value2");
var_dump($params->keys());
?>
--EXPECT--
array(2) {
  [0]=>
  string(4) "key1"
  [1]=>
  string(4) "key2"
}
