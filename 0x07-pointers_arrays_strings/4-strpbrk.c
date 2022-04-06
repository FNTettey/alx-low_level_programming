#include"main.h"
/**
 * _strpbrk - Returns a pointer to the first occurrence of any bytes
 * in the string accept , or NULL if no string is found
 * @s: String being checked
 * @accept: Valid characters
 * Return: First occurence of string with valid characters
 */
char *_strpbrk(char *s, char *accept)
{
int i, k;
char *q;
int f;
f = 0;
for (i = 0; s[i] != '\0'; i++)
{
for (k = 0; accept[k] != '\0'; k++)
{
if (accept[k] == s[i])
{
q = &s[i];
return (q);
f = 1;
break;
}
}
if (f == 1)
{
break;
}
}
if (f == 0)
{
return (NULL);
}
return (0);
}
