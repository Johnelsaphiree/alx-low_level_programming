#include "lists.h"

/**
 * reverse_listint - Reverse a linked list
 * @head: Pointer of the pointer of the head of the list
 *
 * Return: Pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next; /* Store next */
		(*head)->next = prev; /* Rev current node pointer */
		prev = (*head); /* Move pointer one position ahead */
		(*head) = next;
	}

	(*head) = prev;

	return (*head);
}
