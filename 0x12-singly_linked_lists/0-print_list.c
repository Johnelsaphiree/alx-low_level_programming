#include "lists.h"
#include <stdio.h>

/**
 * print_list - Print all the elements of the list
 * @h: Linked list data
 *
 * Return: Number of elements in the list
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[%d] %s\n", 0, "(nil)");

		h = h->next;
		i++;
	}

	return (i);
}
