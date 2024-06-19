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

### `URL::parse`

Parses a URL and returns a `URL` object or `null`.

Example:

```php
$url = "https://example.com/path/to/resource";
$parsedUrl = URL::parse($url);
if ($parsedUrl) {
    echo "Protocol: " . $parsedUrl->getProtocol() . "\n";
    echo "Host: " . $parsedUrl->getHost() . "\n";
}
```

### `URL::parseWithBase`

Parses a URL with a base URL and returns a `URL` object or `null`.

Example:

```php
$url = "/path/to/resource";
$base = "https://example.com";
$parsedUrl = URL::parseWithBase($url, $base);
if ($parsedUrl) {
    echo "Full URL: " . $parsedUrl->getHref() . "\n";
}
```

### `URL::idnaToUnicode`

Converts a domain name to its Unicode representation.

Example:

```php
$input = "xn--fsqu00a.xn--fsqu00a";
$unicodeDomain = URL::idnaToUnicode($input);
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

## API

```php

enum HostType : int {
    case DEFAULT = 0;
    case IPV4 = 1;
    case IPV6 = 2;
}


enum SchemeType : int {
    case HTTP = 0;
    case NOT_SPECIAL = 1;
    case HTTPS = 2;
    case WS = 3;
    case FTP = 4;
    case WSS = 5;
    case FILE = 6;
}

    
class URLSearchParams {
    public function __construct(string $init = "") {}
    public function __toString(): string {}
    public final function get(string $key): ?string {}
    public final function getAll(string $key): array {}
    public final function has(string $key): bool {}
    public final function append(string $key, string $value): void {}
    public final function set(string $key, string $value): void {}
    public final function sort(): void {}
    public final function delete(string $key): void {}
    public final function keys(): array {}
    public final function values(): array {}
    public final function entries(): array {}
}

class URL {
    public function __construct(string $url = "", ?string $base = null) {}
    public function __toString(): string {}
    public final function hasCredentials(): bool {}
    public final function hasEmptyHostname(): bool {}
    public final function hasHostname(): bool {}
    public final function hasNonEmptyUsername(): bool {}
    public final function hasNonEmptyPassword(): bool {}
    public final function hasPort(): bool {}
    public final function hasPassword(): bool {}
    public final function hasHash(): bool {}
    public final function hasSearch(): bool {}
    public final function getHref(): string {}
    public final function getProtocol(): string {}
    public final function getUsername(): string {}
    public final function getPassword(): string {}
    public final function getHost(): string {}
    public final function getHostname(): string {}
    public final function getPort(): string {}
    public final function getPathname(): string {}
    public final function getSearch(): string {}
    public final function getHash(): string {}
    public final function getOrigin(): string {}
    public final function getHostType(): HostType {}
    public final function getSchemeType(): SchemeType {}
    public final function setHref(string $url): bool {}
    public final function setProtocol(string $protocol): bool {}
    public final function setUsername(string $username): bool {}
    public final function setPassword(string $password): bool {}
    public final function setHost(string $host): bool {}
    public final function setHostname(string $hostname): bool {}
    public final function setPort(string $port): bool {}
    public final function setPathname(string $pathname): bool {}
    public final function setSearch(string $search): void {}
    public final function setHash(string $hash): void {}
    public final function setSearchParams(URLSearchParams $searchParams): void {}
    public final function clearPort(): void {}
    public final function clearHash(): void {}
    public final function clearSearch(): void {}

    public static function parse(string $url, ?string $base = null): ?URL {}
    public static function parseWithBase(string $url, string $base): ?URL {}
    public static function canParse(string $url): bool {}
    public static function canParseWithBase(string $url, string $base): bool {}
    public static function idnaToUnicode(string $input): string {}
    public static function idnaToAscii(string $input): string {}
}
```

## Installation

To use this library in your project, you can install it via pecl:

```bash
pecl install ada_url
```

Alternatively, you can clone the repository and build the extension manually:

```bash
git clone https://github.com/lnear-dev/ada-url
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
