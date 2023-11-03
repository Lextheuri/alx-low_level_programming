#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: input value
 * @max: input vale
 * Return: pointer, if malloc fails and min > max return NULL
 */
int *array_range(int min, int max)
{
int i, *array;
if (min > max)
{
return (NULL);
}
array = (int *)malloc(sizeof(int) * (max - min + 1));
if (array == NULL)
{
return (NULL);
}
for (i = 0; min <= max; i++, min++)
{
array[i] = min;
}
return (array);
}
