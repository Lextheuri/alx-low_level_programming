#include "main.h"
#include <stddef.h>
/**
 * _strstr - function that locates a substring
 * @haystack: pointer to the string to search within
 * @needle: pointer to the substring to search for
 * Return: pointer to the start of the located substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
if (*needle == '\0')
{
return (haystack);
}
while (*haystack != '\0')
{
char *h = haystack;
char *n = needle;
while (*n != '\0' && *h == *n)
{
h++;
n++;
}
if (*n == '\0')
{
return (haystack);
}
haystack++;
}
return (NULL);
}
