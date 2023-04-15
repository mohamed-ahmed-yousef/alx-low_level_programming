#include <stdio.h>
#include <string.h>
int main(void)
{

    char c='A';
    char hex[3];
    sprintf(hex, "%02X", 30);
    printf("%s", hex);


}