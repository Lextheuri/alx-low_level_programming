#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the opcodes of its own main function
 * @argc: argument count
 * @argv: argument value
 * Return: (0)
 */
int main(int argc, char *argv[])
{
int i, num_bytes;
if (argc != 2)
{
printf("Error\n");
return (1);
}
num_bytes = atoi(argv[1]);
if (num_bytes < 0)
{
printf("Error\n");
return (2);
}
printf("The opcodes of the main function:\n");
for (i = 0; i < num_bytes; i++)
{
printf("%02x ", *((unsigned char *)main + i));
}
printf("\n");
return (0);
}
