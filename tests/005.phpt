--TEST--
URL Class - setSearchParams and getSearchParams Methods
--DESCRIPTION--
Test if the setSearchParams and getSearchParams methods correctly set and get the search parameters.
--FILE--
<?php
namespace AdaURL;
$searchParams = new URLSearchParams();
$searchParams->append('key', 'value');
$searchParams->append('key2', 'value2');
$url = URL::parse("https://example.com");
$url->setSearchParams($searchParams);
var_dump($url->getSearch());
?>
--EXPECT--
string(22) "?key=value&key2=value2"

