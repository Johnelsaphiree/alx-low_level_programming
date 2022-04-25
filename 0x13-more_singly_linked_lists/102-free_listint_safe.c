#include "lists.h"

/**
 * free_listint_safe - Free the list and put NULL in the head
 * @h: Head of the list
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	listint_t *temp;

	if (h == NULL)
		return (i);

	while (*h != NULL)
	{
		temp = *h;
		*h = temp->next;
		free(temp);
		i++;
	}
	*h = NULL;

	return (i);
}
