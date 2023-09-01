#include "main.h"
/**
 * print_to_98 -  function that prints all natural numbers from n to 98, followed by a new line
 * @n: starting int
 * Return: (0)
 *
 */
void print_to_98(int n)
{
if (n <= 98)
{
int i;
for (i = n; i <= 98; i++)
{
int number = i;
while (number > 9)
{
putchar(number / 10 + '0');
putchar(number % 10 + '0');
putchar(',');
putchar(' ');
break;
}
putchar(i % 10 + '0');
if (i != 98)
{
putchar(',');
putchar(' ');
}
else
{
putchar('\n');
}
}
}
else
{
int i;
for (i = n; i >= 98; i--)
{
int number = i;
while (number > 9)
{
putchar(number / 10 + '0');
putchar(number % 10 + '0');
putchar(',');
putchar(' ');
break;
}
putchar(i % 10 + '0');
if (i != 98)
{
putchar(',');
putchar(' ');
}
else
{
putchar('\n');
}
}
}
}
