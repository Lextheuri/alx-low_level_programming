#include "main.h"
/**
 * _strncat - Function Concatenates at most n characters
 * from src to end of dest using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
char *dest_ptr = dest;
while (*dest_ptr != '\0')
{
dest_ptr++;
}
while (*src != '\0' && n > 0)
{
*dest_ptr = *src;
dest_ptr++;
src++;
n--;
}
*dest_ptr = '\0';
return (dest);
}
