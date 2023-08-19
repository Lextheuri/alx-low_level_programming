#include "main.h"
/**
 * more_numbers - prints x10 the numbers, from 0-14, followed by a new line
 * Return (0) success
 */
void more_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
int num;
for (num = 0; num <= 14; num++)
{
if (num >= 10)
{
_putchar('0' + num / 10);
}
_putchar('0' + num % 10);
}
_putchar('\n');
}
}
