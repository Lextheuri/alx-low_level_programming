#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint -  function returns sum of all data (n) of listint_t
 * @head: pointer to listint_t
 * Return: final sum
 */
int sum_listint(listint_t *head)
{
int sum = 0;
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
