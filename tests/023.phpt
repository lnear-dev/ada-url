--TEST--
URL Class - getHostType Method
--DESCRIPTION--
Test if the getHostType method returns the correct host type.
--FILE--
<?php
$url = URL::parse("https://example.com");
var_dump($url->getHostType());
?>
--EXPECT--
enum(HostType::DEFAULT)
