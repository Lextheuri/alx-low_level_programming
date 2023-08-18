#include "main.h"
/**
 * print_numbers - print_numbers, from 0 - 9, followed by a new line.
 *
 * Return: (0) success
 */
char c;
int _putchar(char c);
void print_numbers(void)
{
char n;
for (n = '0'; n <= '9'; n++)
{
_putchar(n);
}
_putchar('\n');
}
