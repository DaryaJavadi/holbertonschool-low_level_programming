/**
 * _atoi - converts a string to an integer.
 * @s: input string.
 * Return: integer.
 */
#include <limits.h>
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
	int digit = *s - '0';

	if (sign == 1 && (result > (INT_MAX - digit) / 10))
		return (INT_MAX);
	if (sign == -1 && (result > (INT_MAX - digit) / 10))
		return (INT_MIN);
	result = result * 10 + digit;
	s++;
	}
	return (result * sign);
}
