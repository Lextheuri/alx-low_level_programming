#include "main.h"
#include <string.h>
/**
 * puts2 -function prints character of a string, from 1st,and new line.
 * @str: pointer to string
 * return: character of the string
 */
void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
