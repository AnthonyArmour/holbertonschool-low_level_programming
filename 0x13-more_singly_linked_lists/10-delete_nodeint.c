#include "lists.h"
/**
 * delete_nodeint_at_index - deletes specific node from list
 * @head: head
 * @index: index
 * Return: int
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *trav;
	unsigned int num = 0;

	trav = *head;
	while (trav)
	{
		num++;
		trav = trav->next;
	}
	if (index >= num)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	trav = *head;
	for (num = 0; num <= (index - 1); num++)
	{
		temp = trav;
		trav = trav->next;
	}
	temp->next = trav->next;
	free(trav);
	return (1);
}
