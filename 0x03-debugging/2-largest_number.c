#include "main.h"

/**
 * largest_number - function for printing the largest of three numbers
 * @a: first integer
 * @b: second integer
 * @c: third  integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b)
	{
		largest = a;
	}
	else
	{
		largest = b;
	}

	if (c > largest)
	{
		largest = c;
	}

	return (largest);
}
