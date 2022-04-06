#include"main.h"
/**
 *main - entry point
 *Description: prints the n times tables.
 *Return: Always return zero
 *@n the value the user enters
 **/
void print_times_table(int n)
{
if (n >= 0 && n < 16)
{
int p;
for (n = 0; n <= 9; n++)
{
for (n = 0; n <= 9; n++)
{
p = (n * n);
_putchar(p + '0');
_putchar(',');
_putchar(' ');
}
}
}
}
