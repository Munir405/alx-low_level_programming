#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free the allocated memory for dog_t structure
 * @d: pointer to dog_t struture
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
