#include<ctype.h>
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 *main - entry point
 *Description: prints the alphabet in lowercase, and then in uppercase.
 *Return: Always return zero(0)
 **/
int main(void)
{
int x;
  /* My code */
for (x = 'a'; x <= 'z'; x++)
{
x = tolower(x);
putchar(x);
}
for (x = 'A'; x <= 'Z'; x++)
{
x = toupper(x);
putchar(x);
}
putchar('\n');
return (0);
}
