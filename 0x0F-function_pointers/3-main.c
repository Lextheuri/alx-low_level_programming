#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful, or error code
 */
int main(int argc, char *argv[])
{
int num1, num2;
int (*f)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
f = get_op_func(argv[2]);
if (f == NULL || (argv[2][1] != '\0'))
{
printf("Error\n");
exit(99);
}
if ((argv[2][0] == '/' || argv[2][0] == '%') && (num2 == 0))
{
printf("Error\n");
exit(100);
}
printf("%d\n", f(num1, num2));
return (0);
}
