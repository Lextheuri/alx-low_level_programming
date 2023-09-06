#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that adds positive numbers
 * @argc: argument count
 * @argv: argument value
 * Return: (0)
 */
int main(int argc, char *argv[])
{
int i, sum = 0;
for (i = 1; i < argc; i++)
{
int num = atoi(argv[i]);
if (num > 0)
{
sum += num;
}
else
{
printf("Error\n");
return (1);
}
}
if (sum == 0)
{
printf("0\n");
}
else
{
printf("%d\n", sum);
}
return (0);
}
