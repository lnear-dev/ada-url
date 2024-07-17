--TEST--
URLSearchParams Class - sort Method
--DESCRIPTION--
Test if the sort method correctly sorts the parameters by key.
--FILE--
<?php
namespace AdaURL;
$params = new URLSearchParams("key2=value2&key1=value1");
$params->sort();
echo $params;
?>
--EXPECT--
key1=value1&key2=value2
