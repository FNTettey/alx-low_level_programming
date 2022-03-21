#include"main.h"
/**
 *  print_rev() - Entry point
 * description: reverses a string
 * @s points to the string we want to output
 **/
void print_rev(char *s)
{
int length, i, j, temp;
length = strlen(s);
for (i = 0; i < length / 2; i++)
{
temp = s[i];
s[i] = s[length - i - 1];
s[length - i - 1] = temp;
}
for (j = 0; j < length - 1; j++)
{
_putchar(s[j]);
}
_putchar('\n');
}

