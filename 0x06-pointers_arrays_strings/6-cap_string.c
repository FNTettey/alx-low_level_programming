#include "main.h"
/**
 * cap_string - entry point
 * description: capitalises new words
 *Return: Always 0.
 * *n- points to string being converted
 */
char *cap_string(char *n)
{
char separators[] = " \t\n,;.!?\"(){}";
int i;
int j;
for (i = 0; n[i] != '\0'; i++)
{
for (j = 0; separators[j] != '\0'; j++)
{
if (n[i] == separators[j] && n[i + 1] >= 97 && n[i + 1] <=122)
{
n[i + 1] = n[i + 1] - 32;
}
}
}
return (n);
}
