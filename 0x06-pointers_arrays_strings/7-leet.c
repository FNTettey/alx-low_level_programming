#include "main.h"
/**
 * cap_string - entry point
 * description: encodes a string into 1337
 *Return: string that was encoded
 * *s- points to string being encoded
 */
char *leet(char *s)
{
char letters[] = {'A', 'E', 'O', 'T', 'L'};
int rep[] = {4, 3, 0, 7, 1};
int i;
unsigned int j;
i = 0;
while (s[i] != '\0')
{
for (j = 0; j < sizeof(letters); j++)
{
if (s[i] == letters[j] || s[i] == letters[j] + 32)
{
s[i] = 48 + rep[j];
}
}
i++;
}
return (s);
}
