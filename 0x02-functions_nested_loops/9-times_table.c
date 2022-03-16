#include"main.h"
 /**
  *main - entry point
  *Description: prints the 9 times tables.
  *Return: Always return zero
  **/
void times_table(void)
{
int r;
int c;
int n;
for (r = 0; r <= 9; r++)
{
for (c = 0; c <= 9; c++)
{
n = (r * c);
_putchar(n);
_putchar(',');
_putchar(' ');
}
}
}
