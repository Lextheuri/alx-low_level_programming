#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - function deletes head node of listint_t linked
 * @head: double pointer to listint_t
 * Return: head node’s data (n) else 0 if list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int data;
if (*head == NULL)
{
return (0);
}
data = (*head)->n;
temp = *head;
*head = (*head)->next;
free(temp);
return (data);
}
