#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index -  function returns sum of all data (n) of listint_t
 * @head: double pointer to listint_t
 * @index: range
 * Return: 1 success or -1 if list is empty or index out of range
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current, *prev, *temp;
unsigned int i;
if (head == NULL || *head == NULL)
{
return (-1);
}
if (index == 0)
{
temp = *head;
*head = (*head)->next;
free(temp);
return (1);
}
current = *head;
prev = NULL;
i = 0;
while (i < index && current != NULL)
{
prev = current;
current = current->next;
i++;
}
if (i < index || current == NULL)
{
return (-1);
}
prev->next = current->next;
free(current);
return (1);
}
