#include "search_algos.h"

/**
 * print_arr - helper func to print array everytime array is halved
 * @array: array
 * @a: left index of original array
 * @b: right index of original array
 */

void print_arr(int *array, size_t a, size_t b)
{
	size_t i = 0;

	printf("Searching in array: ");
	for (i = a; i <= b; i++)
	{
		if (i != b)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
}

/**
 * binary_search - search mids
 * @array: given array of ints
 * @size: size of array
 * @value: value to search for
 * Return: index at which value's found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t ctr = 0;
	size_t a = 0;
	size_t b = size - 1;

	if (!array)
		return (-1);

	while (a <= b)
	{
		print_arr(array, a, b);
		mid = (a + b) / 2;
		if (array[ctr] == value)
			return (ctr);
		else if (array[mid] > value)
			b = ctr - 1;
		else
			a = ctr + 1;
	}
	return (-1);
}
