#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - function returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: NULL if str = NULL and no memory, pointer to duplicate string
 */
char *_strdup(const char *str)
{
char *duplicate;
size_t len;
if (str == NULL)
{
return (NULL);
}
len = strlen(str);
duplicate = (char *)malloc((len + 1) * sizeof(char));
if (duplicate == NULL)
{
return (NULL);
}
strcpy(duplicate, str);
return (duplicate);
}
