#include"main.h"
/**
 * main - entry point
 * description:  prints all numbers between parameter and 98
 * Return: Always 0.
 */
void print_to_98(int n)
/**
 * description: prints all numbers between parameter and 98
 * Parameter description: a number inputed by the user
 **/
{
if (n > 98)
{
while (n > 9)
{
putchar(n);
putchar(',');
putchar(' ');
n--;
}
}
else if (n < 98)
{
while (n < 98)
{
putchar(n);
putchar(',');
putchar(' ');
n++;
}
}
else
{
putchar(98);
}
}
