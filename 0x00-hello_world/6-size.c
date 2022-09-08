#include <stdio.h>

/**
 * main - Point of entry
 * Return: zero (Success)
 */

int main(void)
{
	int int_type;
	char char_type;
	float float_type;
	long int long_int_type;
	long long int long_long_int_type;

	printf("Size of a char: %lu byte(s)\n", sizeof(char_type));
	printf("Size of an int: %lu byte(s)\n", sizeof(int_type));
	printf("Size of a long: %lu byte(s)\n", sizeof(long_int_type));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long_long_int_type));
	printf("Size of a float: %lu byte(s)\n", sizeof(float_type));
	return (0);
}
