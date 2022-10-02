#include <stdio.h>
#define NUM 1000000000

/**
 * main - print first 98 fibonacci series
 * Return: zero(0) success
 */

int main(void)
{
	int counter, overflow;
	unsigned long num1 = 1;
	unsigned long num2 = 1;
	unsigned long sum = 0;
	long num1_head, num1_end, num2_head, num2_end, sum_head, sum_end;

	printf("1");
	for (counter = 2; counter < 93; counter++)
	{
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
		printf(", %lu", sum);
	}
	num1_head = num1 / NUM;
	num1_end = num1 % NUM;
	num2_head = num2 / NUM;
	num2_end = num2 % NUM;
	for (; counter < 99; counter++)
	{
		overflow = (num1_end + num2_end) / NUM;
		sum_head = (num1_head + num2_head) + overflow;
		sum_end = (num1_end + num2_end) - (overflow * NUM);

		printf(", %lu%lu", sum_head, sum_end);

		num1_head = num2_head;
		num1_end = num2_end;
		num2_head = sum_head;
		num2_end = sum_end;
	}
	printf("\n");

	return (0);
}
