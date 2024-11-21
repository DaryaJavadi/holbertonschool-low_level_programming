/**
 * *string_nconcat - Concatenates
 * @s1: string 1
 * @s2: string 2
 * @n: count of elements from second str
 * Return: NULL if it fails
 */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (*(s1 + i))
	{
		i++;
	}
	while (*(s2 + j))
	{
		j++;
	}
	if (n >= j)
	{
		n = j;
	}
	str = malloc(sizeof(char) * (i + n) + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	while (k < (i + n))
	{
		if (k < i)
			*(str + k) = *(s1 + k);
		else
			*(str + k) = *(s2 + k - i);
		k++;
	}
	str[k] = '\0';
	return (str);
}
