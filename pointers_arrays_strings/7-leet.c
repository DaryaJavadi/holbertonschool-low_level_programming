/**
 * leet - encodes a string into 1337
 * @str: input string.
 * Return: the pointer to dest.
 */
#include "main.h"
char *leet(char *str)
{
	char *leet_chars = "43071";
	char *normal_chars = "aeotlAEOTL";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == normal_chars[j])
			{
				str[i] = leet_chars[j % 5];
				break;
			}
		}
	}
	return (str);
}
