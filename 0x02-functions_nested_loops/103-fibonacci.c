#include <stdio.h>

/**
 * main - print the sum of even fibonacci sequence
 * Return: zero(0)
 */

int main(void)
{
	int sum_of_numbers = 0;
	int num1 = 1;
	int num2 = 1;
	int sum = 1;

	while (num2 < 4000000)
	{
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;

		if ((sum <= 4000000) && (sum % 2 == 0))
			sum_of_numbers += sum;
	}
	printf("%d\n", sum_of_numbers);

	return (0);
}
