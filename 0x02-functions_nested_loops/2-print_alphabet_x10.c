#include "main.h"
/**
 * print_alphabet_x10: prints x10 the alphabet, in lowercase
 * followed by a new line
 */
void print_alphabet_x10(void)
{
int j;
for (j = 0; j < 10; j++)
{
char n[26];
int i;
for (i = 0; i < 26; i++)
{
n[i] = 'a' + i;
_putchar(n[i]);
}
_putchar('\n');
}
}
