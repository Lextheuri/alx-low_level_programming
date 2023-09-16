#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: input paramenter
 * Return: 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i;
va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
{
sum = va_arg(args, int);
sum += sum;
}
va_end(args);
return (sum);
}
