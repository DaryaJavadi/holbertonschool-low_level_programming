/**
 * _puts_recursion - check the code
 * @s: - s
 * Return: Always 0.
 */
#include "main.h"
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(++s);
}
