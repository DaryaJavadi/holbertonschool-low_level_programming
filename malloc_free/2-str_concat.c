/**
 * str_concat - replaces
 * @s1: string 1
 * @s2: string 2
 * Return: NULL if it fails
 */
#include <stdlib.h>
#include "main.h"
char *str_concat(char *s1, char *s2)
{
	size_t len1 = 0, len2 = 0;
	size_t i = 0;
	char *result;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	result = malloc((len1 + len2 + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
	result[i] = s1[i];
	}

	for (i = 0; i < len2; i++)
	{
	result[len1 + i] = s2[i];
	}

	result[len1 + len2] = '\0';
	return (result);
}
