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
for (x = 0; x <= 15; x++)
{
if (x < 10)
{
putchar(x);
}
else
{
putchar("%x", &x);
}
}
putchar('\n');
return (0);
}
