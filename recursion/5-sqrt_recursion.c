#include "main.h"
/**
 * find_sqrt - finds square root
 * @a: given number to find square root
 * @i: base case for recursion
 * Return: square
 */
int find_sqrt(int a, int i)
{
	if (i * i == a)
	{
		return (i);
        }
	else if (i * i > a)
	{
		return (-1);
	}
	else
	{
		return (find_sqrt(a, i + 1));
	}
}

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: number
 * Return: square root of given number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
	return (find_sqrt(n, 0));
	}
}
