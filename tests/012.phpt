--TEST--
URL Class - setHost and getHost Methods
--DESCRIPTION--
Test if the setHost and getHost methods correctly set and get the host property.
--FILE--
<?php
$url = URL::parse("https://example.com");
$url->setHost("example.org");
echo $url->getHost();
?>
--EXPECT--
example.org
