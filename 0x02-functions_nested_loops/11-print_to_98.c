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
while (n > 97)
{
printf("%d" ,n);
if (n != 98)
{
putchar(',');
putchar(' ');
}
n--;
}
}
else if (n < 98)
{
while (n < 99)
{
printf("%d", n);
if (n != 98)
{
putchar(',');
putchar(' ');
}
n++;
}
}
else
{
printf(98);
}
}
