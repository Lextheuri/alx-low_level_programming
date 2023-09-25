#include <stdio.h>
#include "lists.h"
/**
 * print_listint - function that prints elements of listint_t list
 * @h: pointer to listint_t
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t node_count;
node_count = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
node_count++;
}
return (node_count);
}
