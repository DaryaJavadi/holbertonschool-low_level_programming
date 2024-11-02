/**
 * _atoi - converts a string to an integer.
 * @s: input string.
 * Return: integer.
 */
#include <unistd.h>
#include "main.h"
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (*s && (*s < '0' || *s > '9'))
	{
	if (*s == '-')
	sign = -sign;
	s++;
	}

	while (*s >= '0' && *s <= '9')
	{
	result = result * 10 + (*s - '0');
	s++;
	}
	return (result * sign);
}
