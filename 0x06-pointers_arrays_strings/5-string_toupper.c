#include "main.h"
#include <ctype.h>
/**
 * string_toupper - function that converts lowercase to uppercase
 * @str: pointer to string to be converted
 * Return: (str) lowercase
 *
 */
char *string_toupper(char *str)
{
char *ptr = str;
while (*ptr != '\0')
{
if (islower(*ptr))
{
*ptr = toupper(*ptr);
}
ptr++;
}
return (str);
}
