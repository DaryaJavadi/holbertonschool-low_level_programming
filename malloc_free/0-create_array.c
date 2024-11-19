/**
 *create_array - gives specific characters to make an array
 *@size: size of the array
 *@c: character which is given to the array
 *Return: NULL if it fails
 */
#include <stdlib.h>
#include "main.h"
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
	arr[i] = c;
	}
	return (arr);
}
