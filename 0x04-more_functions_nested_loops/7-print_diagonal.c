#include"main.h"
/**
 *main - entry point
 *Description: prints a line using "_" n times
 *Return: Always return zero
 *@n the value the user enters
 **/
void print_diagonal(int n)
{
if (n > 0)
{
int j;
int s;
s = 0;
j = 0;
while (j <= n)
{
int k;
k = 0;
if (s > k)
{
for (k = 0; k <= s; k++)
{
_putchar(' ');
}
}
_putchar('\\');
s++;
j++;
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}

