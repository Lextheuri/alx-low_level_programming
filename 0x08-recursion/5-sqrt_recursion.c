#include <stdio.h>
/**
 * _sqrt_recursion - function that returns natural square root of a number
 * @n: input value
 * Return: (0) success
 */
int _sqrt_helper(int n, int guess);
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (n);
}
else
{
return (_sqrt_helper(n, n / 2));
}
}
/**
 * _sqrt_helper - helper function
 * @n: input value
 * @guess: input value
 * Return:(0) success
 */
int _sqrt_helper(int n, int guess)
{
int guess_squared = guess * guess;
if (guess_squared == n)
{
return (guess);
}
else if (guess_squared < n)
{
return (_sqrt_helper(n, guess + 1));
}
else
{
return (_sqrt_helper(n, guess - 1));
}
}
