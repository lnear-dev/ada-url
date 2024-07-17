--TEST--
URL Class - clearHash Method
--DESCRIPTION--
Test if the clearHash method correctly clears the hash property.
--FILE--
<?php
namespace AdaURL;
$url = URL::parse("https://example.com#anchor");
$url->clearHash();
echo $url->getHash();
?>
--EXPECT--
