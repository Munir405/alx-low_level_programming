#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - print last digit of integer
 * @n: integer argument to print last digit of
 * Return: last digit of the integer
 */

int print_last_digit(int n)
{
	int last = abs(n % 10);

	_putchar(last + '0');
	return (last);
}
