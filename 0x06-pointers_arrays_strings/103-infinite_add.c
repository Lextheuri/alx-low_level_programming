#iclude "main.h"
/**
 * *infinite_add - function that adds two numbers
 * @n1:
 * @n2:
 * @r: 
 * @size_r:
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int carry = 0;
int len1 = strlen(n1);
int len2 = strlen(n2);
int max_len = len1 > len2 ? len1 : len2;
int i = 0;
if (max_len + 1 > size_r)
{
return (0);
}
memset(r, '\0', size_r);
while (max_len > 0) {
int digit1 = i < len1 ? n1[len1 - 1 - i] - '0' : 0; 
int digit2 = i < len2 ? n2[len2 - 1 - i] - '0' : 0;
int sum = digit1 + digit2 + carry;
carry = sum / 10;
r[max_len - 1] = (sum % 10) + '0'; 
i++;
max_len--;
}
if (carry > 0)
{
if (i + 1 > size_r)
{
return(0);
}
r[i] = carry + '0';
r[i + 1] = '\0';
}
else
{
r[i] = '\0';
}
return (r);
}
