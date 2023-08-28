#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: pointer to the string
 * @accept: pointer to the set of bytes to search
 * Return: pointer to the first matching byte in @s, or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
char *a = accept;
while (*a != '\0')
{
if (*s == *a)
{
return (s);
}
a++;
}
s++;
}
return (NULL);
}
