#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: condition 1
 * @av: condition 2
 * Return: pointer to the concatenated string
 */
char *argstostr(int ac, char **av)
{
int i, index, total_length;
char *concatenated_str;
if (ac == 0 || av == NULL)
{
return (NULL);
}
total_length = 0;
for (i = 0; i < ac; i++)
{
total_length += strlen(av[i]);
}
total_length += ac;
concatenated_str = malloc((total_length + 1) * sizeof(char));
if (concatenated_str == NULL)
{
return (NULL);
}
index = 0;
for (i = 0; i < ac; i++)
{
strcpy(concatenated_str + index, av[i]);
index += strlen(av[i]);
concatenated_str[index++] = '\n';
}
concatenated_str[total_length] = '\0';
return (concatenated_str);
}
