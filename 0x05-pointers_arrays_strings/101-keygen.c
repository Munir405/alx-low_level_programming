#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

/**
 * randomPasswordGen - program to generate random valid passwords
 * Description: generates random password numbers
 * @n: argument
 * Return: void
 */

void randomPasswordGen(int N)
{
	int i = 0;

	int randomizer = 0;

	srand((unsigned int)(time(NULL)));

	char num[] = "0123456789";
	char letters[] = "abcdefghijklmnopqrstuvxyz";
	char upperLetters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char symbols[] = "!@#$^*?";
	char psword[N];

	randomizer = rand() % 4;

	for (i = 0; i < N; i++)
	{
		if (randomizer == 1)
		{
			psword[i] = num[rand() % 10];
			randomizer = rand() % 4;
			printf("%c", psword[i]);
		}
		else if (randomizer == 2)
		{
			psword[i] = symbols[rand() % 8];
			randomizer = rand() % 4;
			printf("%c", psword[i]);
		}
		else if (randomizer == 3)
		{
			psword[i] = upperLetters[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", psword[i]);
		}
		else
		{
			psword[i] = letters[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", psword[i]);
		}
	}
}

/**
 * main - generates random password
 * Return: zero
 */

int main(void)
{
	int N = 10;

	randomPasswordGen(N);

	return (0);
}
