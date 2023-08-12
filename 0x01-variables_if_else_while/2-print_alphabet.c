#include <stdio.h>
/*
 * main - Entry point
 * Description: print alphabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
char n[26];
for (i = 0; i < 26; i++)
{
n[i] = 'a' + i;
}
for (i = 0; i < 26; i++)
{
putchar(n[i]);
putchar('\n');
}
return (0);
}
