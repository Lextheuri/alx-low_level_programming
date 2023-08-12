#include <stdio.h>
/**
 * main - Entry point
 * Description: Print alphabet in lowercase then uppercase
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;
char n[26], x[26];
for (i = 0; i < 26; i++)
{
n[i] = 'a' + i;
x[i] = 'A' + i;
}
for (i = 0; i < 26; i++)
{
putchar(n[i]);
}
for (j = 0; j < 26; j++)
{
putchar(x[j]);
}
putchar('\n');
return (0);
}
