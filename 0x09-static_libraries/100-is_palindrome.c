#include "main.h"
#include <string.h>
/**
 * is_palindrome_recursive: function that returns 1 if a string is a palindrome and 0 if not
 * @s: string
 * Return: 1 if a string is a palindrome and 0 if not
 *
 */
int is_palindrome_recursive(char *s, int l, int h)
{
if (l >= h)
{
return (1);
}
if (s[l] != s[h])
{
return (0);
}
return (is_palindrome_recursive(s, l + 1, h - 1));
}
int is_palindrome(char *s)
{
return (is_palindrome_recursive(s, 0, strlen(s) - 1));
}
