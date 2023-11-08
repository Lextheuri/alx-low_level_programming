#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function that executes a function as a parameter
 * @array: array
 * @size: elements to print
 * @action: pointer
 * Return: nothing
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
for (i = 0; i < size; i++)
{
(*action)(array[i]);
}
}
