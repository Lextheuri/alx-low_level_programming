#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* main - Entry point prints random number is positive zero negative */
/* Description: prints random number is positive zero or negative */
/* Return: Always 0 (success) */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n");
}
else if (n == 0)
{
printf("%d is zero\n");
}
else
}
printf("%d is negative\n");
}
return (0);
}
