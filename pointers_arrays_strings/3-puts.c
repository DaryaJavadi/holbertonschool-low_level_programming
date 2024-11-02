/**
 *_puts - print a string automatically followe by a new line
 *@str: string
 */
#include <stdio.h>
#include <string.h>
#include "main.h"
void _puts(char *str)
{
	while (char *str)
	{
		putchar(*str++);
	}
	putchar('\n')
}
