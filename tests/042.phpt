--TEST--
URLSearchParams Class - Constructor with Empty String
--DESCRIPTION--
Test if the URLSearchParams class constructs correctly with an empty string.
--FILE--
<?php
namespace AdaURL;
$params = new URLSearchParams("");
echo $params;
?>
--EXPECT--
