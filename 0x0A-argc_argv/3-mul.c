#include <stdio.h>
#include <stdlib.h>
/**
 * main -  program that multiplies two numbers
 * @argc: argument count
 * @argv: argument value
 * Return: 1 if argc != 3 otherwise return multiplication
 */
int main(int argc, char *argv[])
{
int x, y, n = 0;
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
x = atoi(argv[1]);
y = atoi(argv[2]);
n = x * y;
printf("%d\n", n);
return (0);
}
