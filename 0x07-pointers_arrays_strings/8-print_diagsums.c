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
	int i, j;

	for (i = 0; i < (size * size); i += (size + 1))
	{
		diagsum_1 += a[i];
	}

	for (j = (size - 1); j < ((size * size) - 1); j += (size - 1))
	{
		diagsum_2 += a[j];
	}

	printf("%d, %d\n", diagsum_1, diagsum_2);
}

