#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - function that allocates memory using malloc
 * @s1: string 1
 * @s2: string 2
 * @n: input value
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int s1_length, s2_length;
char *result;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
s1_length = strlen(s1);
s2_length = strlen(s2);
if (n >= s2_length)
{
n = s2_length;
}
result = (char *)malloc(s1_length + n + 1);
if (result == NULL)
{
return (NULL);
}
strcpy(result, s1);
strncat(result, s2, n);
return (result);
}
