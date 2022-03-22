#include"main.h"
/**
* puts_half() - Entry point
* prints second half of a stringf ollowed by a new line.
* @str: string pointer
*/
void puts_half(char *str)
{
int length;
int j;
int n;
length = strlen(str);
if (length % 2 == 0)
{
n = length / 2;
}
else
{
n = ((length - 1) / 2);
}
for (j = n ; j <= length; j++)
{
_putchar(str[j]);
}
_putchar('\n');
}
