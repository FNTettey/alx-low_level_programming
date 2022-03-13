#include<ctype.h>
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
 /**
  *main - entry point description
 *Description: Print the alphabet in lower case except q and e
  *Return: Always return zero(0)
 */
int main(void)
{
int x;
/* My code */
for (x = 'A'; x <= 'z'; x++)
{
if (x != 'e' && x != 'q')
{
x = tolower(x);
putchar(x);
}
}
putchar('\n');
return (0);
}
