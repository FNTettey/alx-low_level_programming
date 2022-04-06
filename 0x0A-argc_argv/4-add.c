#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
/**
 * main - Entry point
 *@argc: number of arguments
 *@argv: pointer to string with arguments
 *
 * Return:
 *0 if successful
 *1 if not
 */
int main(int argc, char *argv[])
{
int i, sum = 0;
if (argc < 1)
{
return (0);
}
for (i = 1; i < argc; i++)
{
if (!atoi(argv[i]))
{
printf("%s\n", "Error");
return (1);
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
