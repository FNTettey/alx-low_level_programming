#include"main.h"
/**
 *main - entry point
 *Description: prints the last digit of a number.
 *Return: Always return zero(0)
 **/
int print_last_digit(int n)
{
int d;
d = (abs(n)) % 10;
_putchar(d + '0');
return (d);
}
