/**
 * set_bit - function with two arguments
 * @n: pointer to value
 * @index: position to change bit
 * Return: 1 if worked and -1 if error
 */
#include "main.h"
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(*n) * 8))
		return (-1);

	*n |= 1 << index;
	return (1);

}
