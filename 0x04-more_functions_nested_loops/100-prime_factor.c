#include "main.h"
#include <stdio.h>
/**
 * findLargestPrimeFactor - program that prints largest prime factor of number followed by new line 
 * @number: 612852475143
 * Return: (0)
 */
long long findLargestPrimeFactor(long long number)
{
long long largest = 0;
while (number % 2 == 0)
{
largest = 2;
number /= 2;
}
for (long long i = 3; i * i <= number; i += 2)
{
while (number % i == 0)
{
largest = i;
number /= i;
}
}
if (number > 2)
{
largest = number;
}
return (largest);
}
int main()
{
long long number = 612852475143;
long long result = findLargestPrimeFactor(number);
printf("%lld\n", result);
return (0);
}
