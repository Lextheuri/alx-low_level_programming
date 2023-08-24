#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of intengers
 * @a: pointer to array
 * @n: number of elements
 * Return: reversed elements
 */
void reverse_array(int *a, int n)
{
int left = 0;
int right = n - 1;
while (left < right)
{
int temp = a[left];
a[left] = a[right];
a[right] = temp;
left++;
right--;
}
}
