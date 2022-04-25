#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list
 * @h: Head of the linked list
 *
 * Return: Number of nodes (size_t)
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
