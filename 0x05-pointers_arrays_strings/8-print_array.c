#include "main.h"
/**
 * print_array() - entry
* prints n array elements followed by a new line.
 * @a: points to the array
 * @n number of array elements to print
 */
void print_array(int *a, int n)
{
int j;
for (j = 0; j < n; j++)
{
if (j == n - 1)
{
printf("%d", a[j]);
}
else
{
printf("%d, ", a[j]);
}
}
putchar('\n');
}
