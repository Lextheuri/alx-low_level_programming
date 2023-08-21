#include "main.h"
/**
 * _puts - puts strings to stdout
 * @str: string to print in stdout
 *
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
