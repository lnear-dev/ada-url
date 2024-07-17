--TEST--
URLSearchParams Class - values Method
--DESCRIPTION--
Test if the values method correctly returns all the values.
--FILE--
<?php
namespace AdaURL;
$params = new URLSearchParams("key1=value1&key2=value2");
var_dump($params->values());
?>
--EXPECT--
array(2) {
  [0]=>
  string(6) "value1"
  [1]=>
  string(6) "value2"
}
