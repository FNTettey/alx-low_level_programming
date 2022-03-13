#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 *main - entry point
 *Description:  all single digit numbers of base 10 starting from 0
 *Return: Always return zero(0)
 **/
int main(void)
{
int x;
  /* My code */
for (x = 0; x <= 9; x++)
{
putchar(x + '0');
putchar(',' + '0');
putchar(' ');
}
putchar('\n');
return (0);
}
