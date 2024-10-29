/**
*print_triangle - Prints the lines,
*                      n times, followed by a new line.
*@size: size
*Return: Always 0
*/
#include <stdio.h>
#include"main.h"
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	int i, j, k;

	for (i = 1; i <= size; i++)
	{
	for (j = i; j < size; j++)
	{
                _putchar(' ');
	}
            for ( k = 1; k <= i; k++)
	{
		_putchar('#');
	}
	    _putchar('\n');
	}
	}
}
