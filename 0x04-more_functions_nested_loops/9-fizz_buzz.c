#include "main.h"
/**
 *  main - Entry point
 * description: 3 =fizz, 5 =Buzz 3 & % = FizzBuzz
 * Return: void
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
putchar(32);
}
else if (i % 3 == 0)
{
printf("Fizz");
putchar(32);
}
else if (i % 5 == 0)
{
printf("Buzz");
putchar(32);
}
else
{
printf("%d", i);
putchar(32);
}
}
return (0);
}
