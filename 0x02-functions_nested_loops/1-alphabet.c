#include "main.h"
/**
 * print_alphabet - Function prints alphabet in lowercase
 */
void print_alphabet(void)
{
char n[26];
int i;
for (i = 0; i < 26; i++)
{
n[i] = 'a' + i;
putchar(n[i]);
}
{
putchar('\n');
}
}
