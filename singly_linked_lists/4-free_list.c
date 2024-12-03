/**
 * free_list - function with one argument
 * @head: pointer to list_t
 * Return: free
 */
#include <stdlib.h>
#include "lists.h"
void free_list(list_t *head)
{
	list_t *cursor;

	while (head)
	{
		cursor = head->next;
		free(head->str);
		free(head);
		head = cursor;
	}
}
