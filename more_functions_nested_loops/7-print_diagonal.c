/**
*print_diagonal - Prints the lines,
*                      n times, followed by a new line.
*@n: n times
*Return: Always 0
*/
#include <stdio.h>
#include"main.h"
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
		}
	}
}
