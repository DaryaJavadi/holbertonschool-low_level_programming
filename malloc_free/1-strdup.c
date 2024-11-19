/**
 * *_strdup - duplicates
 * @str: string
 * Return: NULL if it fails
 */
#include <stdlib.h>
#include "main.h"
char *_strdup(char *str)
{
	char *duplicate;
	int len = 0, i = 0;

	duplicate = malloc(sizeof(str));

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	duplicate = malloc((len + 1) * sizeof(char));
	if (duplicate == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		duplicate[i] = str[i];
		i++;
	}

	return (duplicate);
}
