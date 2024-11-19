/**
 *create_array - gives specific characters to make an array
 *@str: string
 *Return: NULL if it fails
 */
#include <stdlib.h>
#include "main.h"
char *_strdup(char *str)
{
	if (str == NULL)
	{
	return (NULL);
	}

	char *duplicate;
	unsigned int len = 0;
	unsigned int i = 0;

	while (str[len] != '\0')
	{
	len++;
	}

	duplicate = malloc((len + 1) * sizeof(char));

	if (dupicate == NULL)
	{
	return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
	duplicate[i] = str[i];
	}

	return (duplicate);
}
