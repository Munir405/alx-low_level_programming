#include <stdio.h>
#include "main.h"

/**
 * main - calculate days left in a year
 * taking consideration of leap years
 * Return: zero(0)
 */

int main(void)
{
	int month;
	int day;
	int year;

	month = 04;
	day = 01;
	year = 1997;
	printf("Date: %02d/%02d/%04d\n", month, day, year);
	day = convert_day(month, day);
	print_remaining_days(month, day, year);
	return (0);
}
