#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_last_digit - function that prints last digit
 * @n: input string
 * Return: last digit
 */
int print_last_digit(int n)
{
int last_digit = abs(n) % 10;
printf("The last digit of %d is %d\n", n, last_digit);
return (last_digit);
}
