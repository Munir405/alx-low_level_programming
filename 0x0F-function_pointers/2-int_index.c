#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to compare element
 * @size: size of array
 * @cmp: pointer to compare function
 * Return: Zero(0) Success
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1); /* if parameter is NULL return -1 */
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)))
		{
			return (i);
		}
	}
	return (-1);/* if no match return -1 */
}
