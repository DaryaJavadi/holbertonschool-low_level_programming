/**
 *_puts - print a string automatically followe by a new line
 *@str: string
 */
#include <stdio.h>
#include <string.h>
#include "main.h"
void _puts(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
	write(1, "\n", 1);
}
