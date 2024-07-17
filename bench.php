<?php
use AdaURL\URL;

function benchmark(
    $function,
    $name = null,
    $iterations = 100000,
) {
    $start = microtime(true);
    for ($i = 0; $i < $iterations; $i++) $function();
    $end = microtime(true);
    return str_pad($name . ":", 30) . " " . number_format(($end - $start) / $iterations * 1000000, 2) . " µs\n";
}

$testUrls = [
    'https://www.example.com/path/to/page?query=string#fragment',
    'http://user:pass@example.com:8080/path?query=value',
    'ftp://ftp.example.com/file.txt',
    'https://例子.测试',
    '//example.com/path',
    '/path/to/resource',
    'mailto:user@example.com',

    //long URLs
    'https://www.example.com/' . str_repeat('path/', 100) . 'page?query=' . str_repeat('string&', 100) . 'key=value#' . str_repeat('fragment', 100),
    'http://user:pass@' . str_repeat('example.com:8080/', 100) . 'path?' . str_repeat('query=value&', 100),
    'ftp://' . str_repeat('ftp.example.com/', 100) . 'file.txt',
    'https://' . str_repeat('例子.测试/', 100),

];
echo "Benchmarking URL parsing methods:\n";
echo "--------------------------------\n";

foreach ($testUrls as $url) {
    echo "Testing URL:" . substr($url, 0, 50) . "...\n";
    echo benchmark(function () use ($url) {parse_url($url); }, 'parse_url()');
    echo benchmark(function () use ($url) {URL::parse($url); }, 'URL::parse()');
    echo benchmark(function () use ($url) {URL::canParse($url); }, 'URL::canParse()');

    echo "\n";
}
$withBaseUrls = [
    ['https://www.example.com', '/path/to/page?query=string#fragment'],
    ['http://user:pass@example.com:8080', '/path?query=value'],
    ['ftp://ftp.example.com', '/file.txt'],
    ['https://例子.测试', '/path/to/page?query=string#fragment'],
    ['//example.com', '/path/to/page?query=string#fragment'],
    ['/', '/path/to/page?query=string#fragment'],
];

echo "Benchmarking URL parsing methods with base URL:\n";
echo "----------------------------------------------\n";

foreach ($withBaseUrls as $urlParts) {
    $baseUrl = $urlParts[0];
    $url     = $urlParts[1];
    echo "Testing URL:" . substr($baseUrl, 0, 50) . " + " . substr($url, 0, 50) . "...\n";
    echo benchmark(function () use ($baseUrl, $url) {URL::parseWithBase($baseUrl, $url); }, 'URL::parseWithBase()');
    echo benchmark(function () use ($baseUrl, $url) {URL::canParseWithBase($baseUrl, $url); }, 'URL::canParseWithBase()');
    echo "\n";
}

// IDNA conversion benchmarks
$idnaTestStrings = [
    'example.com',
    'example.测试',
    'مثال.إختبار',
    'xn--mgbh0fb.xn--kgbechtv',
    'xn--fsqu00a.xn--0zwm56d',

];

echo "Benchmarking IDNA conversion methods:\n";
echo "------------------------------------\n";

foreach ($idnaTestStrings as $string) {
    echo "Testing string: $string\n";
    echo benchmark(function () use ($string) {URL::idnaToUnicode($string); }, 'URL::idnaToUnicode()');
    echo benchmark(function () use ($string) {URL::idnaToAscii($string); }, 'URL::idnaToAscii()');
    echo "\n";
}