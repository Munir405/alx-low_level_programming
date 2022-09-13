#include <stdio.h>

/**
 * print_to_98 - print number from n to ninty-eight
 * Description: A function to prints numbers till ninty-eight
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
	else if (n <= 98)
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
	putchar('\n');
}
