<?php

/**
 * @generate-class-entries
 * @generate-function-entries
 * @undocumentable
 */
namespace AdaUrl;
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
