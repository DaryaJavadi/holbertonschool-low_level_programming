/**
 * print_binary - function with one argument
 * @n: decimal value
 * Return: putch
 */
#include "main.h"
void print_binary(unsigned long int n)
{
	unsigned long value = n;

	if (value > 1)
	{
		print_binary(value >> 1);
	}
	_putchar((value & 1) + '0');
}
