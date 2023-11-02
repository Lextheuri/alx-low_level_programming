#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - function that frees a 2 dimensional grid alloc_grid function.
 * @av: argument of strings
 * @ac: argument count
 * Returns: pointer to new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
int i;
char *result;
size_t total_length, position;
if (ac == 0 || av == NULL)
{
return (NULL);
}
total_length = 0;
for (i = 0; i < ac; i++)
{
total_length += strlen(av[i]) + 1;
}
result = (char *)malloc(total_length + 1);
if (result == NULL)
{
return (NULL);
}
position = 0;
for (i = 0; i < ac; i++)
{
strcpy(result + position, av[i]);
position += strlen(av[i]);
result[position++] = '\n';
}
result[total_length] = '\0';
return (result);
}
