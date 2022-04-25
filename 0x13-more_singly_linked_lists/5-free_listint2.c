#include "lists.h"

/**
 * free_listint2 - Free the list and put NULL in the head
 * @head: Head of the list
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
	*head = NULL;
}
