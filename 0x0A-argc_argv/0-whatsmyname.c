#include <stdio.h>
/**
 * main - a program that prints its name, followed by a new line
 * @argc: argument count
 * @argv: argument value
 * Return: (0)
 */
int main(int argc, char *argv[])
{
int i;
(void)argc;
i = 0;
while (argv[0][i] != '\0')
{
putchar(argv[0][i]);
i++;
}
{
putchar('\n');
}
return (0);
}
