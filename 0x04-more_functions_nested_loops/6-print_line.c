#include"main.h"
/**
 *main - entry point
 *Description: prints a line using "_" n times
 *Return: Always return zero
 *@n the value the user enters
 **/
void print_line(int n)
{
if (n > 0)
{
int j;
for (j = 0; j <= n; j++)
{
_putchar('_');
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}

