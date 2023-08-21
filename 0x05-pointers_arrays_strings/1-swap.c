#include "main.h"
/**
 * swap_int- function that swaps values of 2 int
 * @a: value to sawp
 * @b: value to swap
 * Return swapped values
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
