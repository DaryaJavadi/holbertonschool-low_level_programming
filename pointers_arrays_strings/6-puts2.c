/**
 *puts2 - print a string automatically followe by a new line
 *@str: string
 */
#include <unistd.h>
#include "main.h"
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	if (i % 2 == 0)
		write(1, &str[i], 1);
	i++;
	}
	write(1, "\n", 1);
}
