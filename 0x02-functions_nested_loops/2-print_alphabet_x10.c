#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase character in ten places
 * Return: zero(0)
 */

void print_alphabet_x10(void)
{
	char letter;

	int number;

	for (number = 0; number <= 9; number++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
