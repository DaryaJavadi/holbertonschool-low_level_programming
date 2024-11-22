/**
 * print_name - entry piint from main
 * @name: string of name
 * @f: entry to another function
 */
#include "function_pointers.h"
void print_name(char *name, void (*f)(char *n))
{
	if (name != NULL && f != NULL)
		f(name);
}
