#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: points to string being encoded
 * return: encoded string
 */
char *rot13(char *s)
{
char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
int i;
unsigned int j;
i = 0;
while (s[i] != '\0')
{
for (j = 0; j < sizeof(rot13); j++)
{
if (s[i] == rot13[j])
{
s[i] = ROT13[j];
}
}
i++;
}
return (s);
}
