#include <stdio.h>

/**
 * main - function entry point
 * Description: function printing single digits using only putchar
 * Return: zero(success)
 */

int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		putchar(number);
		number++;
	}
	putchar('\n');

	return (0);
}
