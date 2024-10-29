/**
*print_line - Prints the lines,
*                      n times, followed by a new line.
*Return: Always 0
*/
#include <stdio.h>
#include"main.h"
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
