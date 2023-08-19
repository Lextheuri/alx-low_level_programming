#include <stdio.h>
/**
 * main - Entry point
 * Description: program to print multiples of 3 Fizz, 5 Buzz and both FizzBuzz
 * Return: (0) success
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz ");
}
else if (i % 3 == 0)
{
printf("Fizz ");
}
else if (i % 5 == 0)
{
printf("Buzz ");
}
else
{
printf("%d ", i);
}
}
{
printf("\n");
}
return (0);
}
