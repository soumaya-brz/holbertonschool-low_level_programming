#include "main.h"

/**
 * sqrt_helper - helper function that tries to find sqrt recursively
 * @n: number to find the square root of
 * @i: current number being tested
 *
 * Return: the natural square root of n, or -1 if none exists
 */
int sqrt_helper(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);
	return (sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 *
 * Return: natural square root of n, or -1 if none exists
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);
	return (sqrt_helper(n, 1));
}

