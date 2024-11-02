/**
 *_puts - print a string automatically followe by a new line
 *@str: string
 */
#include <unistd.h>
#include "main.h"
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i=i+2)
	{
		write(1, &str[i], 1);
	}
	write(1, "\n", 1);
}
