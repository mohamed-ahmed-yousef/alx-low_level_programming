#include <stdio.h>
#define MULT(a,b) a*b
#define SWAP(a, b) { a ^= b; b ^= a; a ^= b; }
 

int main(void)
{
    //  printf("%d\n", MULT(3434,4));
   int a=13;
    int b=12;
    SWAP(a,b);
     printf("%d\n %d", a,b);
}