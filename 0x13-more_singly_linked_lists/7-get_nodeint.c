#include "lists.h"

/**
 * get_nodeint_at_index - Get the nth node of the list
 * @head: Head of the list
 * @index: Index of the list, starting with 0
 *
 * Return: Node in the current index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *h = head;
	unsigned int i = 0;

	while (h != NULL)
	{
		if (i == index)
			return (h);
		i++;
		h = h->next;
	}

	return (NULL);
}
