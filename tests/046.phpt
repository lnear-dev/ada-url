--TEST--
URLSearchParams Class - clone
--DESCRIPTION--
Test the clone functionality.
--FILE--
<?php
namespace AdaURL;
$params = new URLSearchParams("key1=value1&key2=value2");
$params2 = clone $params;
$params2->append("key2", "value3");
$params2->set("key3", "value4");
$params2->delete("key1");
$params2->sort();
echo $params, PHP_EOL, $params2;
?>
--EXPECT--
key1=value1&key2=value2
key2=value2&key2=value3&key3=value4