#include "main.h"

/**
 * print_alphabet - prints lowercase alphabets
 * Return: zero(0)
 */

void print_alphabet(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
