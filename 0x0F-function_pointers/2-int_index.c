#include <stdlib.h>
/**
 * int_index - returns the index of the first element for which the cmp function does not return 0
 *@array:array
 *@size:size of array
 *@cmp:a pointer to the function to be used to compare values
 * Return: no return
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i, count;
count = 0;
if (array != NULL && cmp != NULL)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
count++;
return (i);
}
}
}
if (size <= 0 || count == 0)
return (-1);
else
return (0);
}
