/**
*print_square - Prints the lines,
*                      n times, followed by a new line.
*@n: n times
*Return: Always 0
*/
#include <stdio.h>
#include"main.h"
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}