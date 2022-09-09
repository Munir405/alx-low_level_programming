#include <stdio.h>

/**
 * main - function point of entry
 * Description: funtion to print base 16
 * Return: zero(success)
 */

int main(void)
{
	int num_part = '0';
	int alpha_part = 'a';

	while (num_part <= '9')
	{
		putchar(num_part);
		num_part++;
	}

	while (alpha_part <= 'f')
	{
		putchar(alpha_part);
		alpha_part++;
	}
	putchar('\n');

	return (0);
}
