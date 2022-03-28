#include"main.h"
/**
 * _strchr - Returns a pointer to the first occurrence of the character c
 * in the string s , or NULL if the character is not found
 * @s: \memory adress being copied to
 * @c: Memory adress to copy from
 * Return: First occurence of C
 */
char *_strchr(char *s, char c)
{
int i;
char *q;
int f;
f = 0;
for (i = 0; s[i] != '\0'; i++)
{
if (c == s[i])
{
q = &s[i];
return (q);
f = 1;
break;
}
}
if (f == 0)
{
return (NULL);
}
return (0);
}
