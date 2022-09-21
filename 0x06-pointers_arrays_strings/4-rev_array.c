#include "main.h"

/**
 * reverse_array - reverse array elements
 * @a: array
 * @n: numbers of element
 */

void reverse_array(int *a, int n)
{
	int tmp, begin = 0;
	int end = n - 1;

	while (begin < end)
	{
		tmp = *(a + begin);
		*(a + begin) = *(a + end);
		*(a + end) = tmp;
		begin++, end++;
	}
}
