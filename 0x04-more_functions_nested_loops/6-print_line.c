#include "main.h"

/**
 * print_line - print "_" for n number of times to draw line
 * @n: number of times
 */

void print_line(int n)
{
	int i;

	for (i = n; i > 0; i--)
		_putchar('_');

	_putchar('\n');
}
