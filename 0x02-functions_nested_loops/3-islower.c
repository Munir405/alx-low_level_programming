#include "main.h"

/**
 * _islower - function to determine if a character is lowercase
 * @c: character to check for case
 * Description: determine if a character is lowercase
 * Return: one if lowercase and zero otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
