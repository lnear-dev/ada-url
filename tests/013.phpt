--TEST--
URL Class - setHostname and getHostname Methods
--DESCRIPTION--
Test if the setHostname and getHostname methods correctly set and get the hostname property.
--FILE--
<?php
namespace AdaUrl;
$url = URL::parse("https://example.com");
$url->setHostname("example.org");
echo $url->getHostname();
?>
--EXPECT--
example.org
