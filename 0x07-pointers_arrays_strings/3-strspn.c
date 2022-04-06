#include"main.h"
/**
 * _strspn -  the length of the initial segment of s
 * which consists entirely of bytes in accept.
 * @s: The strng being checked
 * @accept: Valid characters
 * Return: Length of initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j, length;
int f, q;
length = strlen(accept) - 1;
q = 0;
f = 0;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (accept[j] == s[i])
{
f++;
break;
}
else if (j == length && accept[j] != s[i])
{
return (f);
q = 1;
break;
}
}
if (q == 1)
{
break;
}
}
return (0);
}
