--TEST--
URL Class - Constructor and String Representation
--DESCRIPTION--
Test if the URL class constructs correctly and converts to string.
--FILE--
<?php
$url = URL::parse("https://example.com");
var_dump((string)$url);
?>
--EXPECT--
string(20) "https://example.com/"
