#include "main.h"

/**
 * _isalpha - checks for alphabet characters
 * @c: the characters to check
 * Description: a function that check alphabetic character
 * Return: 1 if lower or uppercase, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
