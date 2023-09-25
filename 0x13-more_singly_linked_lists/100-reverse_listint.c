#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * reverse_listint - function that reverses a listint_t linked
 * @head: double pointer to listint_t
 * Return: current head pointer
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *rest;
if (*head == NULL || (*head)->next == NULL)
{
return (*head);
}
rest = reverse_listint(&((*head)->next));
(*head)->next->next = *head;
(*head)->next = NULL;
*head = rest;
return (*head);
}
