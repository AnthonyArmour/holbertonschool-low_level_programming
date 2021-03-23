#include "lists.h"
/**
 * sum_listint - sums data in list
 * @head: head
 * Return: sum
 *
 */
int sum_listint(listint_t *head)
{
	listint_t *trav;
	int sum = 0;

	if (!head)
		return (0);
	trav = head;
	while (trav->next != NULL)
	{
		sum += trav->n;
		trav = trav->next;
	}
	sum += trav->n;
	return (sum);
}
