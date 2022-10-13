#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer to print
 * @size: size of buffer
 */

void print_buffer(char *b, int size)
{
	int i, j, k;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (k = 0; k < size; k += 10)
	{
		j = size - k < 10 ? size - k : 10;
		printf("%08x: ", k);/* print hex value of k */
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", b[k + i]);/*print hex value of letter */
			else
				printf("  ");/*empty print two space */
			if (i % 2)
				printf(" ");/*if even give a space*/
		}
		for (i = 0; i < j; i++)
		{
			int a = b[k + i];/*if not btw space and end of a-z*/

			if (a < 32 || a > 122)
				a = '.';
			printf("%c", a);/*print full-stop*/
		}
		printf("\n");
	}
}
