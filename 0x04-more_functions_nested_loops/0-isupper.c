#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character to be checked
 * Return: one(1) if success and zero(0) if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
