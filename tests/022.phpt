--TEST--
URL Class - getOrigin Method
--DESCRIPTION--
Test if the getOrigin method returns the correct origin of the URL.
--FILE--
<?php
namespace AdaUrl;
$url = URL::parse("https://example.com:8080/path?arg=value#anchor");
echo $url->getOrigin();
?>
--EXPECT--
https://example.com:8080
