#include "main.h"
#include <stdio.h>
/**
 * rev_string()- reverses a string
 * @s: pointer to string value
 * Return: void
 */
void rev_string(char *s)
{
int i = 0;
int j;
int length;
int k;
int rev[500];
length = strlen(s);
for (j = length ; j >= 0; j--)
{
rev[j] = s[i];
if (i != length)
{
i++;
}
}
k = 2;
while (k <= length)
{
*(s + k) = rev[k];
k++;
}
}
