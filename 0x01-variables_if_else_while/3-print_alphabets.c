#include <stdio.h>
/*
 * main - Entry point
 * Description: print alphabet in lowercase then uppercase
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;
char n[26], x[26];
for (i = 0, j = 0; i < 26, j < 26; i++, j++)
{
n[i] = 'a' + i;
x[j] = 'A' + j;
}
for (i = 0, j = 0; i < 26, j < 26; i++, j++)
{
putchar(n[i]);
putchar('\n');
}
for (j = 0; j < 26; j++)
{
putchar(x[j]);
putchar('\n');
}
return (0);
}
