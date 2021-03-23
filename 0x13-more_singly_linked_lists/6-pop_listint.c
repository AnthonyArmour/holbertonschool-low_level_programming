#include "lists.h"
/**
 * pop_listint - delets head node and returns data
 * @pop_listint: int
 * Return:
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num = 0;

	if (!*head)
		return (num);
	temp = *head;
	num = temp->n;
	temp = temp->next;
	free(*head);
	*head = temp;
	return (num);

}
