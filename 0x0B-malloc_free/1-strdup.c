#include "main.h"
/**
 * _strdup - Entry point
 *@str: string we need to duplicate
 * Return: a pointer to the duplicated string or NULL
 */
char *_strdup(char *str)
{
char *strnew = NULL;
unsigned int i;
int n;
n = 0;
if (str == NULL)
{
return (NULL);
}
else
{
while (str[n] != '\0')
{
n++;
}
strnew = (char *)malloc(n + 1 * sizeof(char));
if (strnew != NULL)
{
for (i = 0; str[i] != '\0'; i++)
{
strnew[i] = str[i];
}
strnew[n + 1] = '\0';
}
}
return (strnew);
}
