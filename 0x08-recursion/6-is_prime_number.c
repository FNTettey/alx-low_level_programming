#include "main.h"
/**
 *Factors - function that returns the number of factors of n
 *@n: original number
 *@y: counter to compare multiplication
 *
 *Return: Number of Factors
 */
int Factors(int n, int y)
{
int count = 0;
if (y <= n)
{
if (n % y == 0)
count++;
return (count + Factors(n, y + 1));
}
return (count);
}
/**
 *is_prime_number - return 1 if is number prime
 *@n: number to evaluate
 *Return: 1 or 0
 */
int is_prime_number(int n)
{
if (Factors(n, 1) == 2)
return (1);
else
return (0);
}
