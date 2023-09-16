#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to function
 */
void print_all(const char* const format, ...)
{
int c, i;
const char *formatPtr;
char *s;
va_list args;
va_start(args, format);
formatPtr = format;
while (*formatPtr)
{
if (*formatPtr == 'c')
{
c = va_arg(args, int);
printf("%c", c);
}
else if
(*formatPtr == 'i')
{
i = va_arg(args, int);
printf("%d", i);
}
else if
(*formatPtr == 'f')
{
double d = va_arg(args, double);
printf("%f", d);
}
else if
(*formatPtr == 's')
{
s = va_arg(args, char*);
if (s != NULL)
{
printf("%s", s);
}
else
{
printf("(nil)");
}
}
formatPtr++;
}
va_end(args);
printf("\n");
}
