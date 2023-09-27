#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * set_string - function that sets the value of a pointer to a char.
 * @s: string
 * @to: new string
 * Return: (0)
 */
void set_string(char **s, char *to);
int main(void)
{
char *str = NULL;
set_string(&str, "Hello, World!");
if (str != NULL)
{
printf("String: %s\n", str);
}
else
{
printf("String is NULL\n");
}
if (str != NULL)
{
free(str);
}
return (0);
}
