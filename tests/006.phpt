--TEST--
URL Class - hasHash Method
--DESCRIPTION--
Test if the hasHash method correctly identifies presence of hash fragment.
--FILE--
<?php
$urlWithHash = URL::parse("https://example.com#anchor");
var_dump($urlWithHash->hasHash());

$urlWithoutHash = URL::parse("https://example.com");
var_dump($urlWithoutHash->hasHash());
?>
--EXPECT--
bool(true)
bool(false)
