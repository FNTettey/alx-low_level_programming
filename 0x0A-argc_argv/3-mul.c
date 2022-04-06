#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * main - Entry point
 *@argc: number of arguments
 *@argv: pointer to string with arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int product;
int n1, n2;
if (argc == 3)
{
n1 = atoi(argv[1]);
n2 = atoi(argv[2]);
product = n1 *n2;
printf("%d\n", product);
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
