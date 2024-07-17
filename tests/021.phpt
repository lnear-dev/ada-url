--TEST--
URL Class - Static Method parse with user, pass, port, path, arg, and anchor
--DESCRIPTION--
Test if the parse static method correctly parses a URL with user, pass, port, path, arg, and anchor.
--FILE--
<?php
namespace AdaURL;
$url = URL::parse("https://user:pass@example.com:8080/path?arg=value#anchor");
var_dump($url);
?>
--EXPECTF--
object(AdaURL\URL)#%d (8) {
  ["protocol"]=>
  string(6) "https:"
  ["username"]=>
  string(4) "user"
  ["password"]=>
  string(4) "pass"
  ["hostname"]=>
  string(11) "example.com"
  ["port"]=>
  string(4) "8080"
  ["pathname"]=>
  string(5) "/path"
  ["search"]=>
  string(10) "?arg=value"
  ["hash"]=>
  string(7) "#anchor"
}
