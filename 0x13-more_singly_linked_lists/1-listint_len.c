#include "lists.h"

/**
 * listint_len - Count number of elements in the list
 * @h: Head of the linked list
 *
 * Return: Number of nodes (size_t)
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
