#include"main.h"
/**
 * main - entry point
 * description: checks whether a number is positive negative or Zero
 * Return: Always 0.
 */
int print_sign(int n)
/**
 * description: checks for +, - or 0
 * Parameter description: a character inputed by the user
 **/
{
if (n > 0)
{
printf("+");
return (1);
}
else if (n == 0)
{
printf("0");
return (0);
}
else
{
printf("-");
return (-1);
}
return (0);
}
