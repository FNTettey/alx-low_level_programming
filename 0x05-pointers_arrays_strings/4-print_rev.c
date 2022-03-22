#include "main.h"
#include <stdio.h>
 /**
  * print_rev - prints a string in reverse, followed by a new line
  * @s: pointer to string value
  * Return: void
  */
void print_rev(char *s)
{
int i = 0;
int j;
int length;
int k;
int rev[100];
length = strlen(s);
for (j = length ; j >= 1; j--)
{
rev[j] = s[i];
i++;
}
k = 0;
while (k <= length)
{
_putchar(rev[k]);
k++;
}
_putchar('\n');
}
