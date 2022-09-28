#include "main.h"

/**
 * find_root - find square root of n starting with 0
 * @n: number
 * @root: test root
 * Return: natural square root, -1 if not
 */

int find_root(int n, int root)
{
	if (root * root > 0)
		return (-1);
	if (root * root == n)
		return (root);

	return (find_root(n, (root + 1)));
}

/**
 * _sqrt_recursion - find natural square root of n
 * @n: number
 * Return: natural root, -1 if not
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_root(n, 0));
}
