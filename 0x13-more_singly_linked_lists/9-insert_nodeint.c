#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index -  function returns sum of all data (n) of listint_t
 * @head: double pointer to listint_t
 * @idx: range where new_node will be added
 * @n: new_nod memory
 * Return: final sum
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *current, *prev;
unsigned int i;
if (head == NULL)
return (NULL);
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
current = *head;
prev = NULL;
i = 0;
while (i < idx && current != NULL)
{
prev = current;
current = current->next;
i++;
}
if (i < idx)
{
free(new_node);
return (NULL);
}
prev->next = new_node;
new_node->next = current;
return (new_node);
}
