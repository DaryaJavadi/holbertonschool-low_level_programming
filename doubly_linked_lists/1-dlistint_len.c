/**
 * dlistint_len - function with one argument
 * @h: pointer to doubly linked list
 * Return: total number of elements
 */
#include "lists.h"
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
