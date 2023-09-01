#include "main.h"
/**
 * times_table - function that prints the 9 times table, starting with 0
 * Return: (0)
 */
void times_table(void)
{
int i;
for (i = 0; i <= 10; i++)
{
int result = 9 * i;
int digit1 = result / 10;
int digit2 = result % 10;
_putchar(digit1 + '0');
_putchar(digit2 + '0');
_putchar('\n');
}
}
