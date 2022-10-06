#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocate memory and set all values to 0
 * @nmemb: size
 * @size: sizeof(datatype)
 * Return: pointer to string
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
	{
		/* typecast the void pointer to char type */
		*((char *)ptr + i) = 0;
	}

	return (ptr);
}
