--TEST--
URL Class - setPathname and getPathname Methods
--DESCRIPTION--
Test if the setPathname and getPathname methods correctly set and get the pathname property.
--FILE--
<?php
$url = URL::parse("https://example.com");
$url->setPathname("/path");
echo $url->getPathname();
?>
--EXPECT--
/path
