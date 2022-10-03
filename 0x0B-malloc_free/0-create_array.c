#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - create array of chars and initialize with a specific char
 * @size: size of array
 * @c: fill array values with this char
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	int i;

	if (size <= 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < (int)size; i++)
	{
		*(arr + i) = c;
	}
	*(arr + i) = '\0';

	return (arr);
}
