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

	char numbers[] = "0123456789";
	char letters[] = "abcdefghijklmnopqrstuvxyz";
	char upperLetters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char symbols[] = "!@#$^*?";
	char password[N];

	randomizer = rand() % 4;

	for (i = 0; i < N; i++)
	{
		if (randomizer == 1)
		{
			password[i] = numbers[rand() % 10];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 2)
		{
			password[i] = symbols[rand() % 8];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 3)
		{
			password[i] = upperLetters[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else
		{
			password[i] = letters[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
	}
}
