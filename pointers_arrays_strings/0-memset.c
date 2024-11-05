/**
* _memset - fills memory, (s+i) is s[i]
*
* @s: area
* @b: byte
* @n: counter
*
* Return: char
*/
#include "main.h"
#include <stdio.h>
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
