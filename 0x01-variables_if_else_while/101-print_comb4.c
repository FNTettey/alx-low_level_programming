#include <stdio.h>
/**
  * main - entry point
  *
  * Description: Ptint all possible different combo of 3 digits
  *
  * Return: 0
  */
int main(void)
{
int i, h, t, u;
for (i = 0; i < 1000; i++)
{
h = i / 100; /* hundreds */
t = (i / 10) % 10; /* tens */
u = i % 10; /* unit */
if (h < t && t < u)
{
putchar(h + '0');
putchar(t + '0');
putchar(u + '0');
if (i < 700)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
