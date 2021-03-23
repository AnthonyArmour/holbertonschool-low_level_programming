#include "lists.h"
/**
 * insert_nodeint_at_index - inserts node into linked list
 * @head: head of list
 * @idx: index where node is added
 * @n: data to be stored in new node
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *trav;
	unsigned int x = 0, y = 0;

	trav = *head;
	while (trav)
	{
		y++;
		trav = trav->next;
	}
	if (idx > y)
		return (NULL);
	temp = malloc(sizeof(listint_t));
	if (!temp)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	if (!*head)
	{
		*head = temp;
		return (temp);
	}
	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (temp);
	}
	trav = *head;
	for (x = 0; x < (idx - 1); x++)
		trav = trav->next;
	temp->next = trav->next;
	trav->next = temp;
	return (temp);
}
