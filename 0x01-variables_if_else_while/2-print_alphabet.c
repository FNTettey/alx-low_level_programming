#include<ctype.h>
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 *main - entry point
*Description: Print the alphabet in lower case
*Return: Always return zero(0)
**/
int main(void)
{
int x;
 /* My code */
for (x = 'A'; x <= 'z'; x++)
{
x = tolower(x);
putchar(x);
}
putchar('\n')
return (0);
}
