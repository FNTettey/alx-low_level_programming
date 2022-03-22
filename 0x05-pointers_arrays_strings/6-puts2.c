#include"main.h"/**
 * puts2 - prints every other character of a string
 * starting with the first character followed by a new line.
 * @str: str pointer
 */
void puts2(char *str)
{
int length;
int j;
length = strlen(str);
for (j = 0 ; j <= length; j++)
{
if (j == 0)
{
_putchar(*(str + j));
}
else if (j % 2 == 0)
{
_putchar(*(str + j));
}
}
_putchar('\n');
}
