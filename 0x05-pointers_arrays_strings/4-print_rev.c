#include "main.h"
/**
 * print_rev -  prints a string, in reverse, followed by a new line
 * @s: pointer to string
 * return: string in reverse order
 */
void print_rev(char *s)
{
int length = 0;
int i;
while (*s != '\0')
{
length++;
s++;
}
for (i = length - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
