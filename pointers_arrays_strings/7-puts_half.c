/**
 * puts_half - prints half of string
 * @str: input string
 */
#include <unistd.h>
#include "main.h"
void puts_half(char *str)
{
	int length = 0;
	int i, start;

	while (str[length] != '\0')
	{
	length++;
	}
	if (length % 2 == 0)
	{
	start = length / 2;
	}
	else
	{
	start = (length - 1) / 2 + 1;
	}

	for (i = start; i < length; i++)
	{
	write(1, &str[i], 1);
	}
	write(1, "\n", 1);
}
