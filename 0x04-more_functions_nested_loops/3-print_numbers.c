#include"main.h"
 /**
  *  main - Entry point
  * description: Prints 0-9
  * Return: void
  */
void print_numbers(void)
{
int j;
for (j = 0; j <= 9; j++)
{
_putchar(j + '0');
}
_putchar('\n');
}
