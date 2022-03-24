#include "main.h"
/**
 * string_toupper - entry point
 * description: converts lowercase leteers to uppercase
 *Return: Always 0.
 * @s- points to string being converted
 */
char *string_toupper(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] -= 32;
}
}
return(s);
}
