#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - function that frees a list_t list
 * @head: pointer to the list_t
 * Return: NULL
 */
void free_list(list_t *head)
{
list_t *current = head;
list_t *temp;
while (current != NULL)
{
temp = current;
current = current->next;
free(temp->str);
free(temp);
}
}
