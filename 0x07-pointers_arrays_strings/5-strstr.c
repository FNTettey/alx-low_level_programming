#include "main.h"
#include <stdio.h>
/**
 * *_strstr - a function that locates a substring
 * or returns NULL if not found
 * @haystack: string
 * @needle: substring being located
 * Return: pointer to begining of string
 */
char *_strstr(char *haystack, char *needle)
{
int i, j, len, f;
char *q;
f = 0;
len = strlen(needle) - 1;
for (i = 0; haystack[i] > '\0'; i++)
{
for (j = 0; needle[j] > '\0'; j++)
{
if (haystack[i] != needle[j])
{
break;
}
}
if (needle[len] == haystack[i])
{
q = &haystack[i - (len)];
return (q);
f = 1;
break;
}
if (f == 1)
{
break;
}
}
return (0);
}
