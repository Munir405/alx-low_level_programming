#include <stdio.h>

/**
 * main - prints first fibonacci sequences
 * Return: zero(0)
 */

int main(void)
{
	int counter;
	int upperlimit = 50;
	long num1 = 1;
	long num2 = 2;

	for (counter = 1; counter <= (upperlimit / 2); counter++)
	{
		if (counter == (upperlimit / 2))
		{
			printf("%li, %li", num1, num2);
		}
		else
		{
			printf("%li, %li ", num1, num2);
			num1 += num2;
			num2 += num1;
		}
	}
	if (upperlimit % 2 == 1)
		printf("%li", num1);

	printf("\n");

	return (0);
}
