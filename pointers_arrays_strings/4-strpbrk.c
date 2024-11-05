/**
* _strpbrk - strpbrk
* @s: source
* @accept: accept
* Return: modified string or null
*/
#include <stddef.h>
#include "main.h"
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*(s) != '\0')
	{
		while (*(accept + i) != '\0')
		{
			if (*(s) == *(accept + i))
				return (s);
			i++;
		}
		s++;
		i = 0;
	}
	return (NULL);
}
