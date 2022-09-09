#include <stdio.h>

/**
 * main - function point of entry
 * Description: function for printing both upper and lowercase characters
 * Return: zero (success)
 */

int main(void)
{
	char l_Aphabet = 'a';
	char u_Aphabet = 'A';

	while (l_Aphabet <= 'z')
	{
		putchar(l_Aphabet);
		l_Aphabet++;
	}

	while (u_Aphabet <= 'Z')
	{
		putchar(u_Alphabet);
		u_Alphabet++;
	}

	putchar('\n');

	return (0);
}
