#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len1 = 1, len2 = 1, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* count length of string 1 nd 2 */
	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (j = 0; s2[j] != '\0'; j++)
		len2++;
	/* allocate memory with length */
	concat = malloc(sizeof(char) * (len1 + len2));

	if (concat == NULL)
		return (NULL);
	/* copy first string */
	for (i = 0; i < len1; i++)
		*(concat + i) = *(s1 + i);
	/* copy second string */
	for (j = 0; j < len2; j++, i++)
		*(concate + i) = *(s2 + j);

	return (concat);
}
