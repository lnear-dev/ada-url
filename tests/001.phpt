--TEST--
Check if ada_url is loaded
--EXTENSIONS--
ada_url
--FILE--
<?php
namespace AdaUrl;
echo 'The extension "ada_url" is available';
?>
--EXPECT--
The extension "ada_url" is available
