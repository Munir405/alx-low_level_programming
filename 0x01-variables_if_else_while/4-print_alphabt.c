#include <stdio.h>

/**
 * main - function entry point
 * Description: function for printing a-z except q and e
 * Return: zero (success)
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if ((alphabet != 'e') && (alphabet != 'q'))
			putchar(alphabet);
			alphabet++;
	}
	putchar('\n');

	return (0);
}

