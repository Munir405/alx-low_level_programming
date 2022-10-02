#include "main.h"

/**
 * _atoi - convert string to int
 * @s: string to convert
 * Return: integer
 */

int _atoi(char *s)
{
	int i;
	int number;
	int sign = 0;
	int no_of_dash = 0;

	for (i = 0; s[i] < '0' || s[i] > '9'; i++)
	{
		if (s[i] == '-')
			no_of_dash++;
		if (s[i] == '\0')
			return (0);
	}

	if (no_of_dash % 2 == 0)
		sign = 1;
	else
		sign = -1;

	if (number = 0; s[i] >= '0' && s[i] <= '9'; i++)
	{
		number = 10 * number + (s[i] - '0');
	}
	return (sign * number);
}
