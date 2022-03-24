#include "main.h"
/**
 * print_array() - reverses the first n contents of an array.
 * @a: points to the array
 * @n number of array elements to switch
 */
void reverse_array(int *a, int n)
{
int j;
int k;
int i = 0;
int rev[500];
for (j = n ; j >= 0; j--)
{
rev[j] = a[i];
i++;
}
k = 1;
while (k <= n)
{
*(a + k) = rev[k];
k++;
}
}
