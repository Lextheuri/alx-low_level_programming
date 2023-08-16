#include "main.h"
/**
 * print_alphabet_x10 - Function to print the alphabet 10 times in lowercase
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
putchar(n[i]);
}
putchar('\n');
}
}
int main(void)
{
print_alphabet_x10();
return (0);
}
