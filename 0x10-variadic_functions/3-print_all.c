#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to function
 */
void print_all(const char *format, ...)
{
const char *sep;
const char *str;
int printed;
va_list args;
va_start(args, format);
sep = "";
printed = 0;
while (*format)
{
switch (*format)
{
case 'c':
printf("%s%c", sep, va_arg(args, int));
break;
case 'i':
printf("%s%d", sep, va_arg(args, int));
break;
case 'f':
printf("%s%f", sep, va_arg(args, double));
break;
case 's':
str = va_arg(args, const char *);
if (str)
{
printf("%s%s", sep, str);
}
else
{
printf("%s(nil)", sep);
}
break;
default:
break;
}
sep = ", ";
format++;
printed++;
}
va_end(args);
if (printed > 0)
{
printf("\n");
}
}
