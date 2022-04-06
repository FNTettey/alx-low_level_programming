#include"main.h"
/**
 * Swap_int - Entry point
 * description: Swaps the two numbers that are being pointed to
 * @a points to the first number
 * @b points to the second number
 **/
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}

