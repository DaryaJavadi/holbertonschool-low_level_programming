/**
 *print_most_numbers numbers from 0 to 9
 *Return: Always 0
 */
#include <stdio.h>
#include"main.h"
void print_most_numbers(void)
{
	int i;
	for (i = 0; i < 10; i++) 
	{
		if (i != 2 && i != 4)
		{
		_putchar(i + '0');
		}
	}
    _putchar('\n');
}
