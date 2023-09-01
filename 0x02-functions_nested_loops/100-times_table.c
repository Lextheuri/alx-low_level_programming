#include "main.h"
/**
 * print_times_table -  function that prints the n times table, starting with 0
 * @n: input value
 * Return: (0)
 */
void print_times_table(int n)
{
int i;
if (n < 0 || n > 15)
{
return;
}
for (i = 0; i <= 15; i++)
{
int result = i * n;
if (result >= 10)
{
putchar(result / 10 + '0');
putchar(result % 10 + '0');
}
else
{
putchar(result + '0');
}
if (i < 15)
{
putchar(',');
if (result >= 10)
{
putchar(' ');
}
}
else
{
putchar('\n');
}
}
}
