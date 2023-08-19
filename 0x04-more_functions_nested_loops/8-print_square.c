#include "main.h"
/**
 * print_square- Function that prints square in terminal
 * @size: is the number of times # to be printed
 * Return: size if size <= zero
 */
void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int i;
for (i = 0; i < size; i++)
{
int j;
for (j = 0; j < size; j++)
{
size = '#';
_putchar('#');
}
_putchar('\n');
}
}
}
