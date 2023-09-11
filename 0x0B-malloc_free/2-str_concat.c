#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: string1
 * @s2: string2
 * Return: NULL if string is empty and a pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
int i, len1, len2;
char *result;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
len1 = strlen(s1);
len2 = strlen(s2);
result = malloc(len1 + len2 + 1);
if (result == NULL)
{
return (NULL);
}
for (i = 0; i < len1; i++)
{
result[i] = s1[i];
}
for (i = 0; i < len2; i++)
{
result[i + len1] = s2[i];
}
result[len1 + len2] = '\0';
return (result);
}
