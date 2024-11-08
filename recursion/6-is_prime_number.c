/**
 * is_prime_number - find prime numbers
 * @n: number
 * Return: Always 0.
 */
#include "main.h"
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0)
		return (0);
	else
		return (1);
}