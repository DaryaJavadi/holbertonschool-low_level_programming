/**
 * _strncpy - Copies a string up to n bytes from src
 * @dest: The destination string
 * @src: The source string to copy from
 * @n: The maximum number of bytes to copy from src
 *
 * Return: A pointer to the resulting string dest
 */
#include "main.h"
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	if (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
	}
	else
	{
		dest[i] = '\0';
	}
	}
	return (dest);
}
