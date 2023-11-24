#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to string
 * Return: 0 if the input string is NULL or invalid character is found
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result;
if (b == NULL)
{
return (0);
}
result = 0;
while (*b != '\0')
{
if (*b != '0' && *b != '1')
{
return (0);
}
result = result * 2 + (*b - '0');
b++;
}
return (result);
}
