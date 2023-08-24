#include "main.h"
#include <ctype.h>
/**
 * cap_string - function that capitalizes all words of a string
 * @str: pointer to string
 * Return: (str)capitalized string
 *
 */
char *cap_string(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (islower(str[i]))
{
str[i] = toupper(str[i]);
}
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ',' ||
str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' ||
str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' ||
str[i] == '}') {
if (islower(str[i + 1]))
{
str[i + 1] = toupper(str[i + 1]);
}
}
i++;
}
return (str);
}
