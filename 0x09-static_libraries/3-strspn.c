#include "main.h"
/**
 * _strspn -  function that gets the length of a prefix substring
 * @s: pointer to the string
 * @accept: pointer to the set of bytes
 * Return: number of bytes in initial segment of @s with bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int len = 0;
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
int found = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
found = 1;
break;
}
}
if (!found)
{
return (len);
}
len++;
}
return (len);
}
