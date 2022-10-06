#include <stdlib.h>
#include "main.h"

/**
 * array_range - array of integers
 * @min: start range
 * @max: end range
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, k;
	int j = (max - min + 1);

	if (min > max)
		return (NULL);

	ptr = malloc(j * sizeof(int));
	if (ptr == NULL)
		return (NULL);

	for (i = 0, k = min; i < n; i++, k++)
		*(ptr + i) = k;

	return (ptr);
}
