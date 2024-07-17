--TEST--
URL Class - Static Method idnaToUnicode
--DESCRIPTION--
Test if the idnaToUnicode static method correctly converts IDNA to Unicode.
--FILE--
<?php
namespace AdaURL;
echo URL::idnaToUnicode("xn--fsq");
?>
--EXPECT--
例
