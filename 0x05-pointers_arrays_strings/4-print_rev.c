#include "main.h"

/**
 * print_rev - prints a string in reverse order followed by a new line
 * @s: string to reverse
 */

void print_rev(char *s)
{
	int len = 0;
	int i;

	/* find length of string and point to the last character */
	while (*s != '\0')
	{
		len++;
		s++;
	}

	/* print string reversed starting from the end */
	for (i = len; i = 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
