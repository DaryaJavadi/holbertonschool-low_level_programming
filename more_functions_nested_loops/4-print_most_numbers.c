/**
* print_most_numbers - Prints the numbers from 0 to 9, 
*                      skipping 2 and 4, followed by a new line.
*Return: Always 0 
*/
#include <stdio.h>
#include"main.h"
void print_most_numbers(void)
{
	int i;//declare i

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)//skip 2 and 4
		{
		_putchar(i + '0');//convert integer to character
		}
	}
	_putchar('\n');//print a new line
}
