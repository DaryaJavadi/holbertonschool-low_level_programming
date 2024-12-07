/**
 * free_dlistint - function with one argument
 * @head: pointer to linked list
 * Return: void
 */
#include "lists.h"
void free_dlistint(dlistint_t *head)
{
	dlistint_t *cursor = head;

	while (head)
	{
		head = head->next;
		free(cursor);
		cursor = head;
	}
}
