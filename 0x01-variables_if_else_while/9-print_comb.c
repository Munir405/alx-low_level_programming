#include <stdio.h>

/**
 * main - function entry point
 * Description: function toprint all possibles combination of single digits
 * Return: zero(success)
 */

int main(void)
{
	int number = '0';

	while (number <= '9')
	{
		putchar(number);
		if (number != '9')
		{
			putchar(',');
			putchar(' ');
		}
		number++;
	}
	putchar('\n');

	return (0);
}
