#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function given as a parameter on each element
 * @array: array of element
 * @size: size of the array
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)/* array not empty and action not NULL*/
	{
		for (i = 0; i < size; i++)
		{
			action(*(array + i));
		}
	}
}
