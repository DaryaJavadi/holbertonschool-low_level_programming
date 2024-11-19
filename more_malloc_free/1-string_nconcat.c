/**
 * string_nconcat - Concatenates
 * @s1: string 1
 * @s2: string 2
 * Return: NULL if it fails
 */
#include <stdlib.h>
#include "main.h"
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
	char *result;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	
	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
        	n = len2;

	result = malloc(len1 + n + 1);
	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	for (j = 0; j < n; j++)
		result[i + j] = s2[j];
		result[i + j] = '\0';

	return (result);
}
