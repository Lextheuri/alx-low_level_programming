#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function creates array, and initializes with a specific char
 * @size: size of array
 * @c: array chars
 * Return: NULL if size = 0 and a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *array;
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
