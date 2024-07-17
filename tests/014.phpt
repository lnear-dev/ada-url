--TEST--
URL Class - setPort and getPort Methods
--DESCRIPTION--
Test if the setPort and getPort methods correctly set and get the port property.
--FILE--
<?php
namespace AdaURL;
$url = URL::parse("https://example.com");
$url->setPort("8080");
echo $url->getPort();
?>
--EXPECT--
8080
