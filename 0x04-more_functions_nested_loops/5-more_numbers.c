#include"main.h"
/**
 *  main - Entry point
 * description: Prints 0-14 ten times
 * Return: void
 */
void more_numbers(void)
{
int k;
k = 0;
for (k = 0; k <= 9; k++)
{
int j;
j = 0;
for (j = 0; j <= 14; j++)
{
_putchar(j + '0');
}
_putchar('\n');
}
_putchar('\n');
}
