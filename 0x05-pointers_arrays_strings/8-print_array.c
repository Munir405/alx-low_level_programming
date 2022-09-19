#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integer
 * @a: array
 * @n: number of elements
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))/* last element of the array */
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
