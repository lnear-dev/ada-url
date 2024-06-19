--TEST--
URL Class - setProtocol and getProtocol Methods
--DESCRIPTION--
Test if the setProtocol and getProtocol methods correctly set and get the protocol property.
--FILE--
<?php
$url = URL::parse("https://example.com");
$url->setProtocol("http");
echo $url->getProtocol();
?>
--EXPECT--
http:
