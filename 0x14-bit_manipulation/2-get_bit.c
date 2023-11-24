#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: input value
 * @index: input value
 * Return: -1 if the index is out of bounds
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
return ((n >> index) & 1);
}
