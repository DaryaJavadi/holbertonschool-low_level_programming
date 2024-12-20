/**
 * list_len - function with one argument
 * @h: const list_t pointer argument to struct
 * Return: number of elements
 */
#include <stdio.h>
#include "lists.h"
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
