#include "main.h"

/**
 * print_alphabet - utilizes on the _putchar function to print
 *                 the alphabet a - z
 * Return: void.
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}

/**
 * print_alphabet_x10 - Prints the alphabet ten times.
 *
 * Return: void.
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		print_alphabet();
	}
}
