#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 *main - entry point
 *Description: Print the last digit of anumber and give info about it
 *Return: Always return zero(0)
 **/
int main(void)
{
int n;
int last;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* My code */
last = n % 10;
printf("Last digit of %d is %d\n", n, last);
if (last > 5)
{
printf("and is greater than 5");
}
else if (last == 0)
{
printf("and is 0");
}
else
{
printf("and is less than 6 and not 0");
}
return (0);
}
