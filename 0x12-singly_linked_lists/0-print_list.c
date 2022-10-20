#include "lists.h"

/**
 * print_list - prints all elements of a list_t
 * @h: pointer to list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int count;

	for (count = 0; h != NULL; count++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = n->next;
		}
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (count);
}
