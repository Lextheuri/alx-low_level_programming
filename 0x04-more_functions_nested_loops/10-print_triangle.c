#include "main.h"
/**
 * print_triangle - function that prints triangle in terminal
 * @size: is the number of times # to be printed
 * Return: size if size is <= zero
 */
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int i;
for (i = 1; i <= size; i++)
{
int j;
for (j = 0; j < size - i; j++)
{
_putchar(' ');
}
for (j = 0; j < i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
