#include "main.h"
/**
 * flip_bits - function returns number of bits to flip to get to another.
 * @n: input value
 * @m: input value
 * Return: 0 success
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_result, count;
xor_result = n ^ m;
count = 0;
while (xor_result)
{
count += xor_result & 1;
xor_result >>= 1;
}
return (count);
}
