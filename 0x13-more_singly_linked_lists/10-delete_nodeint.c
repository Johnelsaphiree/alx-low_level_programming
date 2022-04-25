#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - Deletes the node at given index of a list
 * @head: Memory address of the linked list
 * @index: Index of the list to search
 *
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *previous;
	unsigned int i = 0;


	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next; /* Change the head */
		free(temp); /* Free the old head */
		return (1);
	}
	while (temp != NULL && i != index)
	{
		previous = temp; /* Save the previous node */
		temp = temp->next; /* Save the next node */
		i++;
	}
	/* If the given key doesn't found */
	if (temp == NULL)
		return (-1);
	/* Unlink the node from the list */
	previous->next = temp->next;
	free(temp);

	return (1);

}
