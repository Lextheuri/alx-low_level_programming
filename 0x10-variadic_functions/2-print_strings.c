#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function that prints string
 * @separator: string to be printed between numbers
 * @n: number of int passed to function
 */
void print_strings(const char* separator, const unsigned int n, ...)
{
unsigned int i;
const char * str;
va_list args;
va_start(args, n);
for (i = 0; i < n; ++i)
{
str = va_arg(args, const char *);
if (str != NULL)
{
printf("%s", str);
}
else
{
printf("(nil)");
}
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
va_end(args);
printf("\n");
}
