#include <stddef.h>
#include "lists.h"
/**
 * listint_len - function that returns number of elements in linked listint_t
 * @h: pointer to listint_t
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t count = 0;
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
