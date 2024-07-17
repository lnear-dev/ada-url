<?php
use AdaURL\URL;

function benchmark($function, $iterations = 100000) {
    $start = microtime(true);
    for ($i = 0; $i < $iterations; $i++) {
        $function();
    }
    $end = microtime(true);
    return ($end - $start) / $iterations;
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

];

$baseUrlPath = '/path/to/resource';

echo "Benchmarking URL parsing methods:\n";
echo "--------------------------------\n";

foreach ($testUrls as $url) {
    echo "Testing URL:" . substr($url, 0, 50) . "...\n";
    
    $parseUrlTime = benchmark(function() use ($url) {
        parse_url($url);
    });
    echo "parse_url():              " . number_format($parseUrlTime * 1000000, 2) . " µs\n";
    
    $urlParseTime = benchmark(function() use ($url) {
        URL::parse($url);
    });
    echo "URL::parse():             " . number_format($urlParseTime * 1000000, 2) . " µs\n";
    
    $urlParseWithBaseTime = benchmark(function() use ($baseUrlPath, $url) {
        URL::parseWithBase($baseUrlPath, $url);
    });
    echo "URL::parseWithBase():     " . number_format($urlParseWithBaseTime * 1000000, 2) . " µs\n";
    
    $urlCanParseTime = benchmark(function() use ($url) {
        URL::canParse($url);
    });
    echo "URL::canParse():          " . number_format($urlCanParseTime * 1000000, 2) . " µs\n";
    
    $urlCanParseWithBaseTime = benchmark(function() use ($baseUrlPath, $url) {
        URL::canParseWithBase($baseUrlPath, $url);
    });
    echo "URL::canParseWithBase():  " . number_format($urlCanParseWithBaseTime * 1000000, 2) . " µs\n";
    
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
    
    $idnaToUnicodeTime = benchmark(function() use ($string) {
        URL::idnaToUnicode($string);
    });
    echo "URL::idnaToUnicode():     " . number_format($idnaToUnicodeTime * 1000000, 2) . " µs\n";
    
    $idnaToAsciiTime = benchmark(function() use ($string) {
        URL::idnaToAscii($string);
    });
    echo "URL::idnaToAscii():       " . number_format($idnaToAsciiTime * 1000000, 2) . " µs\n";
    
    echo "\n";
}