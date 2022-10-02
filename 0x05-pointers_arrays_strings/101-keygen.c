#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random password to crack crackme file
 * Return: zero(0) on success
 */

int main(void)
{
	int i, j;
	int upper_limit = 2772;
	int ascii_limit = 128;
	time_t t;

	srand((unsigned int)time(&t));
	
	for (j = 0, i = 0; j < upper_limit; j += i)
	{
		i = rand() % ascii_limit;
		if ((j + i) > upper_limit)
			break;
		printf("%c", i);
	}
	printf("%c\n", (upper_limit - j));
	return (0);
}
