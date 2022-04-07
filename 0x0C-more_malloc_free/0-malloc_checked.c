#include "main.h"
/**
 * malloc_checked - Entry point
 *@b: string we need to duplicate
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *p = NULL;
p = malloc(b);
if (p == NULL)
{
exit(98);
}
return (p);
}
