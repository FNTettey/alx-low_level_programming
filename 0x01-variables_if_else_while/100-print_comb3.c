#include <stdio.h>
/**
 * main - entry
 *
 * Description: print all possible combo of two digits
 *
 * Return: 0
 */
int main(void)
{
int x;
int t;
int u;

x  = 0;
while (x < 100)
{
t = x / 10; /* tens */
u = x % 10; /* unit */
if (t < u)
{
putchar(t + '0');
putchar(u + '0');
if (x < 89)
{
putchar(',');
putchar(' ');
}
}
x++;
}
putchar('\n');
return (0);
}
