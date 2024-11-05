/**
*  _strstr - Entry point
*
* @haystack: 'varaibles'
* @needle: 'varaibles'
*
* Return: Always 0 (Success)
*/
#include "main.h"
#include <string.h>
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}
		if (*two == '\0')
			return (haystack);
	}

	return (NULL);
}
