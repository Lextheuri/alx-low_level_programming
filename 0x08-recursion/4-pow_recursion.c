#include "main.h"
/**
 * _pow_recursion - function that returns value x raised to power y
 * @x: input value
 * @y: input value
 * Return: (0) success
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
