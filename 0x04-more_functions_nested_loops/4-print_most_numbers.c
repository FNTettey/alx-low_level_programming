#include"main.h"
/**
 *  main - Entry point
 * description: Prints 0-9 excluding 2 & 4
 * Return: void
 */
void print_most_numbers(void)
{
int j;
for (j = 0; j <= 9; j++)
{
if (j != 2 && j != 4)
{
_putchar(j + '0');
}
}
_putchar('\n');
}
