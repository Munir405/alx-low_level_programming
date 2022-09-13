#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print number from n to 98
 * Description: A function to prints numbers till 98
 * @n: integer argument
 * Return: zero(success)
 */

int print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}

	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}

	if (n == 98)
		printf("%d, ", n);

	printf("\n");

	return (0);
}
