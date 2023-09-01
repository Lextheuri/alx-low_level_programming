#include "main.h"
/**
 * *rot13 -  function that encodes a string using rot13
 * @str: string
 * Return: str
 */
char *rot13(char *str)
{
char *input = str;
char *output = str;
while (*input != '\0')
{
if ((*input >= 'a' && *input <= 'z') || (*input >= 'A' && *input <= 'Z'))
{
char base = (*input >= 'a' && *input <= 'z') ? 'a' : 'A';
*output = ((*input - base + 13) % 26) + base;
}
else
{
*output = *input;
}
input++;
output++;
}
*output = '\0';
return (str);
}
