#include "main.h"
/**
 * factorial - function that returns the factorial of a given number
 * @n: inputs number
 * Return: -1 if @n < 0 and return 1
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
