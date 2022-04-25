#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list
 * @head: Memory address of the head of the list
 *
 * Return: Data of the head deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	temp = *head;
	n = temp->n;
	*head = temp->next;
	free(temp);
	return (n);
}
