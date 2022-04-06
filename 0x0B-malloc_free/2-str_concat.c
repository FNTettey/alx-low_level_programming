#include "main.h"
/**
 * str_concat - Entry point
 *@s1: first string
 *@s2: second string
 *descriptionm : concatenates two strings.
 * Return: pointer should point to a newly allocated space in memory or NULL
 */
char *str_concat(char *s1, char *s2)
{
char *strnew = NULL;
unsigned int i;
int n1;
int n2;
int count = 0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (n1 = 0; s1[n1] != '\0'; n1++)
;
for (n2 = 0; s2[n2] != '\0'; n2++)
;
strnew = (char *)malloc((n1 + n2 + 1) * sizeof(char));
if (strnew == NULL)
{
return (NULL);
}
else
{
for (i = 0; s1[i] != '\0'; i++)
{
strnew[i] = s1[i];
count++;
}
for (i = 0; s2[i] != '\0'; i++)
{
strnew[count] = s2[i];
count++;
}
strnew[count + 1] = '\0';
}
return (strnew);
}
