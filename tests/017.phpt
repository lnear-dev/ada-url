--TEST--
URL Class - setHash and getHash Methods
--DESCRIPTION--
Test if the setHash and getHash methods correctly set and get the hash property.
--FILE--
<?php
namespace AdaURL;
$url = URL::parse("https://example.com");
$url->setHash("anchor");
echo $url->getHash();
?>
--EXPECT--
#anchor
