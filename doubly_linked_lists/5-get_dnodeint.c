/**
 * get_dnodeint_at_index - function with two arguments
 * @head: head pointer to linked list
 * @index: nth node to get node
 * Return: nth node or NULL if fail
 */
#include "lists.h"
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (head && index != 0)
	{
		head = head->next;
		index--;
	}
	if (head && index == 0)
		return (head);
	return (NULL);
}
