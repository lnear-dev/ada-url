--TEST--
URL Class - setHref and getHref Methods
--DESCRIPTION--
Test if the setHref and getHref methods correctly set and get the href property.
--FILE--
<?php
namespace AdaUrl;
$url = URL::parse("https://example.com");
$url->setHref("https://example.org");
echo $url->getHref();
?>
--EXPECT--
https://example.org/
