#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print number from n to 98
 * Description: A function to prints numbers till 98
 * @n: integer argument
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n >= 98)
		{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d", n);
			n--;
		}
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d", n);
			n++;
		}
	}
	_putchar('\n');
}
