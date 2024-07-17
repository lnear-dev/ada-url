--TEST--
URLSearchParams Class - ArrayAccess and Countable
--DESCRIPTION--
Test the ArrayAccess interface.
--FILE--
<?php
namespace AdaURL;
$params = new URLSearchParams("key1=value1&key2=value2");
echo $params["key1"];
echo $params["key2"];
echo $params["key3"];
echo PHP_EOL, count($params),  PHP_EOL;

$params["key1"] = "value3";
$params["key2"] = "value4";
$params["key3"] = "value5";

echo $params["key1"];
echo $params["key2"];
echo $params["key3"];
echo PHP_EOL, count($params),  PHP_EOL;

unset($params["key1"]);
unset($params["key2"]);
unset($params["key3"]);

echo $params["key1"];
echo $params["key2"];
echo $params["key3"];
?>
--EXPECT--
value1value2
2
value3value4value5
3
