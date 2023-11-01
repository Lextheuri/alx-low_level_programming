#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
char *concatenated;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
concatenated = (char *)malloc(strlen(s1) + strlen(s2) + 1);
if (concatenated == NULL)
{
return (NULL);
}
strcpy(concatenated, s1);
strcat(concatenated, s2);
return (concatenated);
}
