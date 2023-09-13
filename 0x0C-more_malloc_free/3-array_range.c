#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - function that creates an array of integers
 * @min: number of elements
 * @max: number of elements
 * Return: pointer to the allocated memory
 */
int *array_range(int min, int max)
{
int i, n, *arr;
if (min > max)
{
return (NULL);
}
n = max - min + 1;
arr = (int *)malloc(n *sizeof(int));
if (arr == NULL)
{
return (NULL);
}
for (i = 0; i < n; i++)
{
arr[i] = min + i;
}
return (arr);
}
