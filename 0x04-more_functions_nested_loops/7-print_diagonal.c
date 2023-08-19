#include "main.h"
/**
 * print_diagonal- Function that prints diagonal in terminal
 * *@n: is the number of times \ to be printed
 * *Return: n if n is <= zero
 */
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i;
for (i = 0; i < n; i++)
{
_putchar('\\');
}
_putchar('\n');
}
}
