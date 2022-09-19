#include "main.h"

/**
 * _strlen - return length of string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * puts_half - print half of the string
 * @str: string
 */

void puts_half(char *str)
{
	int index;
	int len  = _strlen(str);

	/* find the index to start depending on even/odd amount of strlen */

	if (len % 2 != 0)
		index = (len / 2) + 1;
	else
		index = (len / 2);

	while (index < len)
	{
		_putchar(*(str + index)); /* pointer artimetics derefrenced */
		index++;
	}
	_putchar('\n');
}
