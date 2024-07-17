--TEST--
URL Class - Static Method parse
--DESCRIPTION--
Test if the parse static method correctly parses a URL.
--FILE--
<?php
namespace AdaUrl;
$url = URL::parse("https://example.com");
var_dump($url);
?>
--EXPECTF--
object(AdaUrl\URL)#%d (8) {
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
  string(1) "/"
  ["search"]=>
  string(0) ""
  ["hash"]=>
  string(0) ""
}
