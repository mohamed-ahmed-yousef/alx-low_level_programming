#include "main.h"
/**
 * print_chessboard - print chessboar.
 * @a: varial
*/
void print_chessboard(char (*a)[8])
{
int len = sizeof(a);
int j, i;

for (i = 0; i < len; i++)
{
for (j = 0; j < len; j++)
_putchar(a[i][j]);

_putchar('\n');
}
}
