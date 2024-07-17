--TEST--
URLSearchParams Class - entries Method
--DESCRIPTION--
Test if the entries method correctly returns all the key-value pairs.
--FILE--
<?php
namespace AdaURL;
$params = new URLSearchParams("key1=value1&key2=value2");
var_dump($params->entries());
?>
--EXPECT--
array(2) {
  [0]=>
  array(2) {
    [0]=>
    string(4) "key1"
    [1]=>
    string(6) "value1"
  }
  [1]=>
  array(2) {
    [0]=>
    string(4) "key2"
    [1]=>
    string(6) "value2"
  }
}
