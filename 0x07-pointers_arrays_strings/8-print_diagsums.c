#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sums of diagonal in matrix
 * @a: matrix
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int diagsum_1 = 0;
	int diagsum_2 = 0;
	int row, i;

	for (row = 0; row < size; row++)
	{
		i = (row * size) + row;
		diagsum_1 += a[i];
	}

	for (row = 1; row <= size; row++)
	{
		i = (row * size) - row;
		diagsum_2 += a[i];
	}

	printf("%d, %d\n", diagsum_1, diagsum_2);
}

