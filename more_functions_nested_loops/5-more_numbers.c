/**
*more_numbers - Prints the numbers from 0 to 14,
*                      10 times, followed by a new line.
*Return: Always 0
*/
#include <stdio.h>
#include"main.h"
void more_numbers(void)
{
	int i,j;

	for (i = 0; i <= 10; i ++)
	{
		for (j = 0; j <= 14; j ++)
		{
			if (j >= 10)
			{
			_putchar((j/10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
