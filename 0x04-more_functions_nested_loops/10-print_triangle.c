#include"main.h"
 /**
  *main - entry point
  *Description: prints a square nxn
  *Return: Always return zero
  *@size - dimensions of the square
  **/
void print_triangle(int size)
{
int t;
int s, k, p;
t = 0;
s = size;
if (size > 0)
{
int n;
for (n = 0; n <= size; n++)
{
int m;
for (m = 0; m <= size; m++)
{
s--;
t++;
for (k = 0; k <= s; k++)
{
_putchar(32);
}
for (p = 0; p <= t; p++)
{
_putchar('#');
}
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
