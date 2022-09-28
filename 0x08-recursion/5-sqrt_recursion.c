#include "main.h"

/**
 * find_root - find root
 * @n: number
 * @i: integer
 * Return: square root
 */

int find_root(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (find_root(n, i + 1));
}

/**
 * _sqrt_recursion - return natural square of number
 * @n: number
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_root(n, 0));
}
