#include "main.h"
/**
 * is_prime_helper - Recursive helper function to check if a number is prime.
 * @n: The number to check for primality
 * @divisor: The current divisor being checked
 * Return: 1 if n is prime, 0 if not
 */
int is_prime_helper(int n, int divisor)
{
if (n <= 1)
{
return (0);
}
if (divisor * divisor > n)
{
return (1);
}
if (n % divisor == 0)
{
return (0);
}
return (is_prime_helper(n, divisor + 1));
}
/**
 * is_prime_number - Function returns 1 if int is prime number, else return 0.
 * @n: Input number
 * Return: 1 if input int is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
return (is_prime_helper(n, 2));
}
