#include "lists.h"

/**
 * sum_listint - Sum the data of the list
 * @head: Head of the linked list
 *
 * Return: sum of all the data (int)
 */
int sum_listint(listint_t *head)
{
	listint_t *t = head;
	int ans = 0;

	if (t == NULL)
		return (ans);

	while (t != NULL)
	{
		ans += t->n;
		t = t->next;
	}

	return (ans);
}
