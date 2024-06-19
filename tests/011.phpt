--TEST--
URL Class - setPassword and getPassword Methods
--DESCRIPTION--
Test if the setPassword and getPassword methods correctly set and get the password property.
--FILE--
<?php
$url = URL::parse("https://example.com");
$url->setPassword("pass");
echo $url->getPassword();
?>
--EXPECT--
pass
