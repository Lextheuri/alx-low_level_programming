#include <stdio.h>
/**
 * main - Entry point
 * Description: print alphabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
char n[27];
for (i = 0; i < 27; i++)
{
n[i] = 'a' + i;
}
for (i = 0; i < 27; i++)
{
putchar(n[i]);
}
return (0);
}
