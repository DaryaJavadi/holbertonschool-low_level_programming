/**
 * _sqrt_recursion - returns the square root of a number
 * @n: number
 * Return: square root of given number
 */
#include "main.h"
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return find_sqrt(n, 0);
}

/**
 * sqrt_checker - finds square root
 * @n: given number to find square root
 * @i: base case for recursion
 * Return: square
 */
int find_sqrt(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	return find_sqrt(n, i + 1);
}
