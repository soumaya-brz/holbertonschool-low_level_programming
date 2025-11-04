#include "main.h"

/**
 * factorial - returns the factoral of given
 * @n: the number to calculate
 *
 * Return: factorial of n, or -1 if n < 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
