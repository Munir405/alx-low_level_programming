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
	int i;
	int n = (max - min + 1);

	if (min > max)
		return (NULL);

	ptr = malloc(n * sizeof(int));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		ptr[i] = min++;

	return (ptr);
}
