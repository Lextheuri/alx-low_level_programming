#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint_safe - function that prints a listint_t
 * @head: pointer to listint_t
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
while (head != NULL)
{
printf("[%p] %d\n", (void *)head, head->n);
count++;
if (head < head->next)
{
fprintf(stderr, "Linked list loop detected\n");
exit(98);
}
head = head->next;
}
return (count);
}
