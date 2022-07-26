#include "main.h"

/**
 *print_chessboard - prints the chessboard
 *@a: content
 */

void print_chessboard(char (*a)[8])
{
int b, c = 0;
for (b = 0; a[b][c] != '\0'; b++)
{
for (c = 0; c < 8; c++)
{
_putchar(a[b][c]);
if (c == 7)
_putchar('\n');
}
}
}
