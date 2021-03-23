#include "lists.h"
/**
 * add_nodeint_end - adds node to the end of list
 * @head: head of list
 * @n: int
 * Return: add of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *trav;

	if (!*head)
	{
		temp = malloc(sizeof(listint_t));
		if (!temp)
			return (NULL);
		temp->n = n;
		temp->next = NULL;
		*head = temp;
		return (temp);
	}
	temp = malloc(sizeof(listint_t));
	if (!temp)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	trav = *head;
	while (trav->next != NULL)
		trav = trav->next;
	trav->next = temp;
	return (temp);
}
