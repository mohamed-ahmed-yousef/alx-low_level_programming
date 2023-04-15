#include <stdio.h>
#include <string.h>

int main() {
    const char* str1 = "hello world";
    const char* str2 = "ehlw";
    size_t len = strspn(str1, str2);
    printf(" %zu\n", len);
    return 0;
}