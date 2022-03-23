#include "main.h"
/**
 * _strncpy- copies a string pointed to by @src, including the
 * terminating null byte, to a buffer pointed to by @dest using n bytes.
 * @dest: A buffer to copy the string to.
 * @src: The source string to copy.
 * @n the number of bytes to copy
 * Return: A pointer to the destination string @dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
return (strncpy(dest, src, n));
}

