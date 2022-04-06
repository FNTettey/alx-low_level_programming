#include<ctype.h>
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 *main - entry point
 *Description: Print the alphabet in lower case in reverse
 *Return: Always return zero(0)
 **/
int main(void)
{
char x;
  /* My code */
for (x = 'z'; x <= 'a'; x--)
{
x = tolower(x);
putchar(x);
}
putchar('\n');
return (0);
}
