/**
 * _strlen_recursion - Prints the length of a string.
 * @s: string
 * Return: the length of string
 */
#include "main.h"
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
