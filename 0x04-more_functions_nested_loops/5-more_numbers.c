#include "main.h"

/**
 * more_numbers - prints number 0 to 14 ten times
 */

void more_numbers(void)
{
	char i;
	int number;

	for (number = 0; number <= 9; number++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i / 10 > 0)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
