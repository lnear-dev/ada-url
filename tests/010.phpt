--TEST--
URL Class - setUsername and getUsername Methods
--DESCRIPTION--
Test if the setUsername and getUsername methods correctly set and get the username property.
--FILE--
<?php
namespace AdaURL;
$url = URL::parse("https://example.com");
$url->setUsername("user");
echo $url->getUsername();
?>
--EXPECT--
user
