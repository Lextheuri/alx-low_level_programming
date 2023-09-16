#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function that executes function given as parameter
 * @array: array
 * @size: size of the array
 * @action: pointer to function that takes an int as its parameter
 * Return: NULL
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
