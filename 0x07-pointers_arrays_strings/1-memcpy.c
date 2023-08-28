#include "main.h"
#include <stdio.h>
/**
 * _memcpy - function that copies memory area
 * @dest: pointer to memory arear
 * @src: pointer to source memory area
 * @n: bytes to copy
 * Return: a pointer to @dest memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
