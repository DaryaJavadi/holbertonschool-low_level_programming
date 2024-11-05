/**
* print_chessboard - check the code
*
* @a: is pointer yo a 2d array of 8 characters
*
* Return: Always 0.
*/
#include "main.h"
#include <stdio.h>
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}
		putchar('\n');
	}
}
