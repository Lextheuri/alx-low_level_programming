#include "main.h"
/**
 * _sister_function - Helper function that calculates square root recursively
 * @num: The number for which to calculate the square root
 * @root: The current guess for the square root
 * Return: Square root of number, or -1 if not found
 */
int _sister_function(int num, int root);
/**
 * _sqrt_recursion - Function that returns the natural square root of a number
 * @n: The input value for which to calculate the square root
 * Return: Square root of number, or -1 if not found
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else
{
return (_sister_function(n, 0));
}
}
int _sister_function(int num, int root)
{
if ((root * root) > num)
{
return (-1);
}
else if ((root * root) == num)
{
return (root);
}
else
{
return (_sister_function(num, root + 1));
}
}
