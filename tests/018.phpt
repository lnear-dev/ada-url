--TEST--
URL Class - clearPort Method
--DESCRIPTION--
Test if the clearPort method correctly clears the port property.
--FILE--
<?php
$url = URL::parse("https://example.com:8080");
$url->clearPort();
echo $url->getPort();
?>
--EXPECT--
