#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - Prints a representation of a chessboard
 * @a : a pointer to a value
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
int j, i;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
_putchar(a[i][j]);
}
_putchar('\n');
}
}
