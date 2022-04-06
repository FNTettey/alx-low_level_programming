#include<ctype.h>
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 *main - entry point
 *Description: Print all base 16 numbers in lower case.
 *Return: Always return zero(0)
 **/
int main(void)
{
int x;
  /* My code */
for (x = 0; x <= 9; x++)
{
putchar(x + '0');
}
for (x = 'a'; x <= 'f'; x++)
{
x = tolower(x);
putchar(x);
}
putchar('\n');
return (0);
}
