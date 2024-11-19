/**
 * _calloc - allocates memory
 * @nmemb: nmemb
 * @size: size of array
 * Return: NULL if it fails
 */
#include <stdlib.h>
#include <string.h>
#include "main.h"
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *byte_ptr;
	unsigned int total_size = 0, i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	byte_ptr = ptr;
	for (i = 0; i < total_size; ++i)
	{
		byte_ptr[i] = 0;
	}
	return (ptr);
}
