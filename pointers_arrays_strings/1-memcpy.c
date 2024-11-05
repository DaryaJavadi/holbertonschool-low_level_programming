/**
* _memcpy - copies
* @dest: destination, where we write
* @src: source
* @n: counter
*
* Return: char
*/
#include "main.h"
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
