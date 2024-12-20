/**
 * _pow_recursion - returns the value of x with power of y.
 * @x: number
 * @y: power
 * Return: powered number
 */
#include "main.h"
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	if (y > 1)
		return (x * _pow_recursion(x, y - 1));
	else
		return (-1);
}
