/**
 *_strdup - duplicates
 *@str: string
 *Return: NULL if it fails
 */
#include <stdlib.h>
#include "main.h"
char *_strdup(char *str)
{
	
	char *duplicate;
	int len = 0;
	int i = 0;

	duplicate = malloc(sizeof(str));

	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	if (duplicate == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		duplicate[i] = str[i];
		i++;
	}

	return (duplicate);
}
