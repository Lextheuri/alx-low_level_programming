#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array -  function creates array of chars,initialize it specific char.
 * @c: input string
 * @size: length of array
 * Return: NULL if size = 0 or fails, else a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;
if (size == 0)
{
return (NULL);
}
array = (char *)malloc(size * sizeof(char));
if (array == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
array[i] = c;
}
return (array);
}
