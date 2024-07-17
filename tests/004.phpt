--TEST--
URL Class - hasCredentials Method
--DESCRIPTION--
Test if the hasCredentials method correctly identifies presence of credentials.
--FILE--
<?php
namespace AdaUrl;
$urlWithCredentials = URL::parse("https://user:pass@example.com");
var_dump($urlWithCredentials->hasCredentials());

$urlWithoutCredentials = URL::parse("https://example.com");
var_dump($urlWithoutCredentials->hasCredentials());
?>
--EXPECT--
bool(true)
bool(false)
