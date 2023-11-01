#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function creates array of chars,initializes it specific char.
 * @str: pointer to string
  * Return: on success a pointer, else NULL if str = NULL or no memory,
 */
char *_strdup(char *str)
{
char *duplicate;
if (str == NULL)
{
return (NULL);
}
duplicate = (char *)malloc(strlen(str) + 1);
if (duplicate == NULL)
{
return (NULL);
}
strcpy(duplicate, str);
return (duplicate);
}
