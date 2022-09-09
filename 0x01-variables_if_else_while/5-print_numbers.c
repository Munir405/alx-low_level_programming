#include <stdio.h>

/**
 * main - function entry point
 * Description: function for printing single digit numbers
 * Return: zero(success)
 */

int main(void)
{
	int number = 0;

	while (number < 10)
	{
		printf("%i", number);
		number++;
	}
	printf("\n");

	return (0);
}
