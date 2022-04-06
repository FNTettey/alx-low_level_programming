#include "main.h"
/**
 *factorial - print the factorial of n
 *@n: the number to return the factorial of
 *Return: factorial of n or -1 if n < 0
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else
{
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
}
