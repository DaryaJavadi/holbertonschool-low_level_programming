/**
* _strspn - find number of accept
* @accept: accept srting
* @s: main string
* Return: number of occurences
*/
#include "main.h"
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, count = 0;

	while (*(s) != ' ')
	{
		while (*(accept + i) != '\0')
		{
			if (*(s) == *(accept + i))
				count++;
			i++;
		}
		i = 0;
		s++;
	}
	return (count);
}
