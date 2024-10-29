/**
 *_isdigit-checks if the c is digit
 *@c: input for numbers
 *Return: 1 if digit, 0 if not
 */
#include <stdio.h>
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	return (0);
}
