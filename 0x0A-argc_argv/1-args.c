#include <stdio.h>
/**
 * main - Entry point
 *@argc: number of arguments
 *@argv: pointer to string with arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
(void)argv;
if (argc > 1)
{
printf("%d\n", argc - 1);
}
else
{
printf("0\n");
}
return (0);
}
