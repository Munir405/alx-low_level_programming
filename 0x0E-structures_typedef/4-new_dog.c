#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - function that create a new dog
 * @name: pointer to dog's name
 * @age: dog's age
 * @owner: pointer to dog's owner
 * Return: pointer to dog_t struture
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int i, j, k;

	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->name = malloc(i * sizeof(ptr->name));
	if (ptr->name == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}

	for (k = 0; k <= i; k++)
		ptr->name[k] = name[k];

	ptr->age = age;

	ptr->owner = malloc(j * sizeof(ptr->owner));
	if (ptr->owner == NULL)
	{
		free(ptr->owner);
		free(ptr->name);
		free(ptr);
		return (NULL);
	}

	for (k = 0; k <= j; k++)
		ptr->owner[k] = owner[k];

	return (ptr);
}
