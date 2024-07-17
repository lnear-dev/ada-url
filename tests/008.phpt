--TEST--
URL Class - IDNA Conversion Methods
--DESCRIPTION--
Test if the idnaToUnicode and idnaToAscii methods work correctly.
--FILE--
<?php
namespace AdaURL;
echo URL::idnaToAscii("f√©");
echo "\n";
echo URL::idnaToUnicode("xn--fsq");
?>
--EXPECT--
xn--f-nca697w
例
