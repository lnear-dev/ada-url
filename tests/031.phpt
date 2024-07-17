--TEST--
URLSearchParams Class - getAll Method
--DESCRIPTION--
Test if the getAll method correctly retrieves all values for a given key.
--FILE--
<?php
namespace AdaUrl;
$params = new URLSearchParams("key1=value1&key1=value2");
var_dump($params->getAll("key1"));
?>
--EXPECT--
array(2) {
  [0]=>
  string(6) "value1"
  [1]=>
  string(6) "value2"
}
