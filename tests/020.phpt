--TEST--
URL Class - clearSearch Method
--DESCRIPTION--
Test if the clearSearch method correctly clears the search property.
--FILE--
<?php
$url = URL::parse("https://example.com?arg=value");
$url->clearSearch();
echo $url->getSearch();
?>
--EXPECT--

