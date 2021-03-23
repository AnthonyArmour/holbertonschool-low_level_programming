#include "lists.h"
/**
 * free_listint2 - frees list
 * @head: head
 * Return: void
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!*head)
		return (*head);
	temp = *head;
	while (temp)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
