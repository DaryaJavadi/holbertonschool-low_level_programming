/**
 *print_numbers-print numbers from 0 to 9
 *Return: Always 0
 */
#include <stdio.h>
#include"main.h"
void print_numbers(void)
{
	int i=0;
	while (i < 10)
	{
		_putchar (i + '0');
		i++;
	}
	_putchar('\n');
}