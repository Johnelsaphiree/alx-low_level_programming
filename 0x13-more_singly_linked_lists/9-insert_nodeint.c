#include "lists.h"

/**
 * insert_nodeint_at_index - Insert a new node in the given index
 * @head: Memory address of the head list
 * @idx: Index of the list
 * @n: New data (int)
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *t;
	listint_t *h = *head;
	unsigned int i = 0;

	if (*head == NULL && idx > 0)
		return (NULL);

	t = malloc(sizeof(listint_t));
	if (t == NULL)
		return (NULL);
	/* Head insertion case */
	if (idx == 0)
	{
		t->n = n;
		t->next = *head;
		*head = t;
		return (t);
	}
	/* All other cases */
	while (h != NULL)
	{
		if (i == idx - 1)
		{
			t->n = n;
			t->next = h->next;
			h->next = t;
			return (t);
		}
		i++;
		h = h->next;
	}

	free(t);
	return (NULL);
}
