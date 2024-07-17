--TEST--
URL Class - getSchemeType Method
--DESCRIPTION--
Test if the getSchemeType method returns the correct scheme type.
--FILE--
<?php
namespace AdaURL;
$url = URL::parse("https://example.com");
var_dump($url->getSchemeType());
?>
--EXPECT--
enum(AdaURL\SchemeType::HTTPS)
