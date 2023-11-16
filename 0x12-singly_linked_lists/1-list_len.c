#include <stddef.h>
#include "lists.h"
/**
 * list_len - function that returns number of elements in a linked list_t list
 * @h: pointer to the list_t list to print
 * Return: size of nodes outputed
 */
size_t list_len(const list_t *h)
{
size_t count = 0;
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
