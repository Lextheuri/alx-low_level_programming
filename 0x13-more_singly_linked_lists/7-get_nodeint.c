#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - function deletes head node of listint_t linked
 * @head: pointer to listint_t
 * @index: range of node to return
 * Return: node when the index matches else NULL if node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count = 0;
while (head != NULL)
{
if (count == index)
{
return (head);
}
head = head->next;
count++;
}
return (NULL);
}
