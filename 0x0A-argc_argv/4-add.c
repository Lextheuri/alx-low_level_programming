#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * main - program that adds positive numbers
 * @argc: arguments count
 * @argv: arguments value
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int i, sum, num, j;
if (argc < 2)
{
printf("0\n");
return (0);
}
sum = 0;
for (i = 1; i < argc; i++) {
num = 0;
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
num = num * 10 + (argv[i][j] - '0');
}
sum += num;
}
printf("%d\n", sum);
return (0);
}
