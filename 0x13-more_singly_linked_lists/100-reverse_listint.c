#include "lists.h"
/**
 * reverse_listint - reverses linked list
 * @head: head
 * Return: head of reversed list
 *
 *
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *trav, *temp;

	if (!*head)
		return (NULL);
	trav = *head;
	trav = trav->next;
	(*head)->next = NULL;
	while (trav)
	{
		temp = trav->next;
		trav->next = *head;
		*head = trav;
		trav = temp;
	}
	return (*head);
}
