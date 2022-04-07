#include "main.h"
/**
 * string_nconcat - concatenates string s1 with nth of s2
 * @s1: string 1
 * @s2: string 2
 * @n: size to take from s2
 *
 * Return: poiter to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j;
unsigned int len1, len2;
unsigned int str;
char *a;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
len1 = strlen(s1);
len2 = strlen(s2);
if (n >= len2)
{
str = len1 + len2;
}
else
{
str = len1 + n;
}
a = malloc(str + 1);
if (a == NULL)
{
return (NULL);
}
i = 0;
j = 0;
while (s1[i] != '\0')
{
a[j++] = s1[i++];
}
i = 0;
while (s2[i] != '\0' && n-- != 0)
{
a[j++] = s2[i++];
}
a[j] = '\0';
return (a);
}
