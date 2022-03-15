#include"main.h"
/**
 * main - check the code
 * description: Prints the alphabet in lowercase
 * Return: Always 0.
 */
void print_alphabet_x10(void)
/*description: Prints the alphabet in lowercase tenfold */
{
char n;
int c;
for (c = 1; c <= 10; c++)
{
for (n = 'a'; n <= 'z'; n++)
{
_putchar(n);
}
}
_putchar('\n');
}
