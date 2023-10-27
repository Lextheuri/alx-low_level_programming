#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - program prints the minimum number of coins to make change for an amount of money.
 * @argc: arguments count
 * @argv: arguments value
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int cents, coins, num_coins, total_coins;  
if (argc != 2)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[1]);
if (cents < 0)
{
printf("0\n");
return (0);
}
coins[] = {25, 10, 5, 2, 1};
num_coins = sizeof(coins) / sizeof(coins[0]);
total_coins = 0;
for (int i = 0; i < num_coins; i++)
{
while (cents >= coins[i])
{
cents -= coins[i];
total_coins++;
}
}
printf("%d\n", total_coins);
return (0);
}
