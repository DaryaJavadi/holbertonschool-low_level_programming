/**
 * sum_them_all - return the sum of all its parameters
 * @n: number of extra params
 * Return: total sum
 */
#include "variadic_functions.h"
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int s = 0;

	va_start(args, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);
		s += x;
	}
	va_end(args);
	return (s);
}
