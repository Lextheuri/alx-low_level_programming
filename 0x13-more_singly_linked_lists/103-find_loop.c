#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * find_listint_loop - function that finds loop in a linked list
 * @head: pointer to listint_t
 * Return: address of the node else NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow, *fast;
slow = head;
fast = head;
while (fast != NULL && fast->next != NULL)
{
slow = slow->next;
fast = fast->next->next;
if (slow == fast)
{
slow = head;
while (slow != fast)
{
slow = slow->next;
fast = fast->next;
}
return (slow);
}
}
return (NULL);
}
