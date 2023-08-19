#include "main.h"
/**
 *print_line - Function that prints line in terminal
 *@n: is the number of times _ to be printed
 *
 *Return: n if n is <= zero
 */
void print_line(int n)
{
int i;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}
