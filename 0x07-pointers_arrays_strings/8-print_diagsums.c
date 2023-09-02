#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function prints sum of two diagonals of matrix
 * @a: elements of matrix
 * @size: array size
 * Return: (0)
 */
void print_diagsums(int *a, int size)
{
int sum_main_diag = 0;
int sum_sec_diag = 0;
int i;
for (i = 0; i < size; i++)
{
sum_main_diag += *(a + i * size + i);
sum_sec_diag += *(a + i * size + (size - 1 - i));
}
printf("Sum of the main diagonal: %d\n", sum_main_diag);
printf("Sum of the secondary diagonal: %d\n", sum_sec_diag);
}
