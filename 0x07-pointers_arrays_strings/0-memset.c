#include"main.h"
/**
 * _memset -  fills the first n bytes of the memory area
* pointed to by s with the constant byte b
 * @s: points to new memory area
 * @b : constant byte
* @n: Number of bytes for memory area to occupy
 * Return: A pointer to the destination string @dest.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
