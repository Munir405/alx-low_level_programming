#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiply argument numbers and print result
 * @argc: argument counter
 * @argv: numbers to multiply
 * Return: zero on success and 1 if not two argument
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
