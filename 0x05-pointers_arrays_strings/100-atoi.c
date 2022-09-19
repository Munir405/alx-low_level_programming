#include "main.h"

/**
 * _strlen - return length of string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\n')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * index_num_starts - find index where digit start in a string
 * @s: string to search
 * Return: integer
 */

int index_num_starts(char *s)
{
	int i;

	for (i = 0; i < _strlen(s); i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			return (i);
	}
	return (-1); /* return -1 if no digit found */
}

/**
 * find_sign - determine sign of integer
 *@s: interger
 *Return: 1 or -1
 */

int find_sign(char *s)
{
	int negatives  = 0, i = 0, sign = 1;

	while (i < (index_num_starts(s)))
	{
		if (s[i++] == '-')
			negatives++;
	}

	if (negatives % 2 != 0)
		sign = -1;

	return (sign);
}

/**
 * _atoi - convert string to int
 * @s: string to convert
 * Return: integer
 */

int _atoi(char *s)
{
	int index_digit_starts = (index_num_starts(s));
	int sign;
	int digits_to_print = 0;
	int t = 1, i;
	unsigned int num = 0;
	int digit = (index_num_starts(s));

	if (index_digit_starts < 0) /* if no digit found, exit program */
		return (0);

	sign = find_sign(s);

	while ((s[index_digit_starts] >= '0' && s[index_digit_starts] <= '9')
			&& (index_digit_starts <= _strlen(s))) /* count digits to print */
	{
		digits_to_print += 1;
		index_digit_starts++;
	}

	i = 1;

	while (i < digits_to_print) /* find powers of ten to multiple places */
	{
		t *= 10;
		i++;
	}

	for (i = digit; i < (digit + digits_to_print); i++) /* calculate num */
	{
		num += (s[i] - '0') * t;
		t /= 10;
	}

	return (num * sign);
}
