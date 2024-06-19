# PHP URL Manipulation Library

This PHP library provides utilities for parsing, manipulating, and working with URLs, including support for enums, URL components, search parameters, and more.

## Enumerations

### HostType
Represents the type of host in a URL.

- `DEFAULT` = 0
- `IPV4` = 1
- `IPV6` = 2

### SchemeType
Represents the scheme type of a URL.

- `HTTP` = 0
- `NOT_SPECIAL` = 1
- `HTTPS` = 2
- `WS` = 3
- `FTP` = 4
- `WSS` = 5
- `FILE` = 6

## Functions

### `ada_url_parse`
Parses a URL and returns a `URL` object or `null`.

Example:
```php
$url = "https://example.com/path/to/resource";
$parsedUrl = ada_url_parse($url);
if ($parsedUrl) {
    echo "Protocol: " . $parsedUrl->getProtocol() . "\n";
    echo "Host: " . $parsedUrl->getHost() . "\n";
}
```

### `ada_url_parse_with_base`
Parses a URL with a base URL and returns a `URL` object or `null`.

Example:
```php
$url = "/path/to/resource";
$base = "https://example.com";
$parsedUrl = ada_url_parse_with_base($url, $base);
if ($parsedUrl) {
    echo "Full URL: " . $parsedUrl->getHref() . "\n";
}
```

### `ada_idna_to_unicode`
Converts a domain name to its Unicode representation.

Example:
```php
$input = "xn--fsqu00a.xn--fsqu00a";
$unicodeDomain = ada_idna_to_unicode($input);
echo "Unicode Domain: " . $unicodeDomain . "\n";
```

## Classes

### `URL`
Represents a URL and provides methods for manipulation.

Example:
```php
$url = URL::parse("https://example.com/path/to/resource");
echo "Protocol: " . $url->getProtocol() . "\n";
echo "Hostname: " . $url->getHostname() . "\n";
echo "Path: " . $url->getPathname() . "\n";
```

### `URLSearchParams`
Provides methods to work with URL search parameters.

Example:
```php
$searchParams = new URLSearchParams();
$searchParams->append("key", "value1");
$searchParams->append("key", "value2");

echo "Keys: " . implode(", ", $searchParams->keys()) . "\n";
echo "Values for 'key': " . implode(", ", $searchParams->getAll("key")) . "\n";
```

## Installation

To use this library in your project, you can install it via pecl:

```bash
pecl install ada_url
```

Alternatively, you can clone the repository and build the extension manually:

```bash
git clone
cd ada-url
phpize
./configure
make
make install
```

Then, add the following line to your `php.ini` file:

```ini
extension=ada_url.so
```

## License

This library is licensed under the MIT License. See [LICENSE](LICENSE) for details.