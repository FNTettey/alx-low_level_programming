#include"main.h"
/**
 *main - entry point
 *Description: prints a square nxn
 *Return: Always return zero
 *@size - dimensions of the square
 **/
void print_square(int size)
{
if (size > 0)
{
int n;
for (n = 0; n <= size; n++)
{
int m;
for (m = 0; m <= size; m++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
