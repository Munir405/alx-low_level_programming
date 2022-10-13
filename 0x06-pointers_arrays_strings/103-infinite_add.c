#include "main.h" 

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: result
 * @size_r: result buffer size
 * Return: 0 if result cant be stored in r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, hold, remain, tmp, i, j;

	for (len1 = 0; n1[len1]; len1++)
		;
	for (len2 = 0; n2[len2]; len2++)
		;

	if (len1 > size_r || len2 > size_r)
		return (0);
	remain = 0;
	for (len1 = (len1 - 1), len2 = (len2 - 1), i = 0;
			i < (size_r - 1); len1--, len2--, i++)
	{
		hold = remain;
		if (len1 >= 0)
			hold = hold + n1[len1] - '0';
		if (len2 >= 0)
			hold = hold + n2[len2] - '0';
		if (len1 < 0 && len2 < 0 && hold == 0)
			break;
		remain = hold / 10;
		r[i] = (hold % 10) + '0';
	}
	r[i] = '\0';

	if (len1 >= 0 || len2 >= 0 || remain)
		return (0);
	for (i = (i - 1), j = 0; j < i; i--, j++)
	{
		tmp = r[i];
		r[i] = r[j];
		r[j] = tmp;
	}

	return (r);
}
