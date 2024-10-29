#include <stdio.h>
/**
 *_isupper-checks if the c is in uppercase
 *
 *@c: input for alphabet
 *
 * Return: 1 if uppercase, else return 0
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
return (0);
}
