--TEST--
URL Class - setSearch and getSearch Methods
--DESCRIPTION--
Test if the setSearch and getSearch methods correctly set and get the search property.
--FILE--
<?php
$url = URL::parse("https://example.com");
$url->setSearch("arg=value");
echo $url->getSearch();
?>
--EXPECT--
?arg=value
