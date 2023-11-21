#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint_safe - function that frees a listint_t list
 * @h: double pointer to listint_t
 * Return: size of freed list
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *current;
size_t size = 0;
while (*h != NULL)
{
current = *h;
*h = (*h)->next;
free(current);
size++;
}
return (size);
}
