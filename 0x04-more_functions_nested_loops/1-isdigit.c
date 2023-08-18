#include "main.h"
/**
 * _isdigit - check if number is digit 0 - 9
 * @c: char to be checked
 *
 * Return: 1 if digit otherwise 0
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
