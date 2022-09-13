#include "main.h"

/**
 * jack_bauer - prints every minute of a day
 * Description: prints minutes from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;

	while (hours < 24)
	{
		while (minutes < 60)
		{
			_putchar('0' + (hour / 10));
			_putchar('0' + (hours %));
			_putchar(':');
			_putchar('0' + (minutes / 10));
			_putchar('0' + (minutes % 10));
			_putchar('\n');
			minutes++;
		}
		minutes = 0;
		hours++;
	}
}
