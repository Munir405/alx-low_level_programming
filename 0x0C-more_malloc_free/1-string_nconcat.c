#include <stdlib.h>
#include "main.h"

/**
 * len_of_string - length of string
 * @str: string
 * Return: string length
 */

int len_of_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
 * string_nconcat - concatenate s1 and n bytes of s2; return ptr to string
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes to concat from string 2
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, len;
	int num = n;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (num < 0)
		return (NULL);
	if (num >= len_of_string(s2))
		num = len_of_string(s2);
	/* length of space needed */
	len = (len_of_string(s1) + num + 1);

	ptr = malloc(len * sizeof(char));
	/* validate malloced space */
	if (ptr == NULL)
		return (NULL);
	/* concate strings */
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; j < num; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';

	return (ptr);
}
