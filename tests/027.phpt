--TEST--
URL Class - Static Method idnaToUnicode
--DESCRIPTION--
Test if the idnaToUnicode static method correctly converts IDNA to Unicode.
--FILE--
<?php
echo URL::idnaToUnicode("xn--fsq");
?>
--EXPECT--
例
