#include <stdio.h>

/**
 * main - point of entry
 * Description: possible combination of two digits
 * Return: zero(0)
 */

int main(void)
{
	int tens, ones;

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (ones = '0'; ones <= '9'; ones++)
		{
			if (!(tens <= ones))
			{
				putchar(tens);
				putchar(ones);
				if (!(tens == '8' && ones == '9'))
				{
					putchar(' ');
					putchar(',');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
