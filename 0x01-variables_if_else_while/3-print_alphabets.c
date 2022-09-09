#include <stdio.h>

/**
 * main - function point of entry
 * Description: function for printing both upper and lowercase characters
 * Return: zero (success)
 */

int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}

	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}

	putchar('\n');

	return (0);
}
