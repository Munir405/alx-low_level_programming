#include "main.h"

/**
 * _isdigit - checks for digit values between 0 and 9
 * @c: digit to check
 * Return: one if success and zero if not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
