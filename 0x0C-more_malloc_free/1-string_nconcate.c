#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenate s1 and n bytes of s2; return ptr to string
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes to concat from string 2
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, len = 1;
	int num = n;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* length of first string */
	for (i = 0; s1[i] != '\0'; i++)
		;
	/* length of second string */
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (num >= j)
		num = j;
	if (num < 0)
		return (NULL);
	/* length of space needed */
	len = (i + num);

	ptr = malloc(len * sizeof(char));
	/* validate malloced space */
	if (ptr == NULL)
		return (NULL);
	/* concate strings */
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; j < num; j++, i++)
		ptr[i] = s2[j];
	ptr[i] = '\0';

	return (ptr);
}
