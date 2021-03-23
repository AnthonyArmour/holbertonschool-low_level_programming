#include "lists.h"
/**
 * add_nodeint - adds node
 * @head: head of list
 * @n: int
 * Return: add of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	if (*head == NULL)
	{
		temp = malloc(sizeof(listint_t));
		if (temp == NULL)
			return (NULL);
		temp->n = n;
		temp->next = NULL;
		*head = temp;
	}
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (temp);
}
