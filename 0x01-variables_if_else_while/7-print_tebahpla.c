#include <stdio.h>

/**
 * main - function point of entry
 * Description: function to print reverse alphabets
 * Return: zero(success)
 */

int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');

	return (0);
}
