--TEST--
URL Class - Static Method parseWithBase
--DESCRIPTION--
Test if the parseWithBase static method correctly parses a URL with a base.
--FILE--
<?php
$url = URL::parseWithBase("/path", "https://example.com");
var_dump($url);
?>
--EXPECTF--
object(URL)#%d (8) {
  ["protocol"]=>
  string(6) "https:"
  ["username"]=>
  string(0) ""
  ["password"]=>
  string(0) ""
  ["hostname"]=>
  string(11) "example.com"
  ["port"]=>
  string(0) ""
  ["pathname"]=>
  string(5) "/path"
  ["search"]=>
  string(0) ""
  ["hash"]=>
  string(0) ""
}
