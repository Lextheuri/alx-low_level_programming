#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end -  function adds new node at beginning of listint_t list.
 * @head: double pointer to listint_t
 * @n: number of nodes to add
 * Return: address of new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node;
listint_t *current;
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
current = *head;
if (current == NULL)
{
*head = new_node;
}
else
{
while (current->next != NULL)
{
current = current->next;
}
current->next = new_node;
}
return (new_node);
}
