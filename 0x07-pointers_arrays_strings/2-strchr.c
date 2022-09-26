#include "main.h"
#define NULL 0

/**
 * _strchr - locate first occurance of character
 * in a string and return pointer to it
 * @s: string to search
 * @c: target character
 * Return: pointer to character
 */

char *_strchr(char *s, char c)
{
	int i;

	while (s[i] != '\0' && s[i] != c)
		i++;

	if (s[i] == c)
		return (&s[i]);
	else
		return (NULL);
}
