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
int i, j;
if (argc != 3)
{
printf("Error\n");
exit(98);
}
else
{
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] > 57 || argv[i][j] < 48)
{
printf("Error\n");
exit(98);
}
}
}
}
product = atol(argv[1]) *  atol(argv[2]);
printf("%u\n", product);
return (0);
}
