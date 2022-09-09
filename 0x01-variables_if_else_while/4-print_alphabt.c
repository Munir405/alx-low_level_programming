#include <stdio.h>

/**
 * main - function entry point
 * Description: function for printing a-z except q and e
 * Return: zero (success)
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if ((letter != 'q') && (letter != 'e'))
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');

	return (0);
}

