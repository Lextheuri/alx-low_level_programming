#include "main.h"
/**
 * leet - function that encodes a string into 1337
 * @str: pointer to string
 * Return: (str) in leet
 */
char *leet(char *str)
{
int i;
char leet_map[256] = {0};
leet_map['a'] = leet_map['A'] = '4';
leet_map['e'] = leet_map['E'] = '3';
leet_map['o'] = leet_map['O'] = '0';
leet_map['t'] = leet_map['T'] = '7';
leet_map['l'] = leet_map['L'] = '1';
for (i = 0; str[i] != '\0'; i++)
{
str[i] = leet_map[(unsigned char)str[i]];
}
return (str);
}
