#include <stdio.h>

/**
 * main - function point of entry
 * Description: function for printing lowercase character a-z
 * Return: zero (success)
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');

	return (0);
}
