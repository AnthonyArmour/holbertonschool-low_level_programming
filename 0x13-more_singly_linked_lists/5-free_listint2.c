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

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
	free(temp);
	*head = NULL;
}
