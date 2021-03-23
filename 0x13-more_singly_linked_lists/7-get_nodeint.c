#include "lists.h"
/**
 * get_nodeint_at_index - return nth node
 * @head: head
 * @index: index of node
 * Return: ptr to node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int x = 0;

	if (!head)
		return (NULL);
	temp = head;
	for (x = 0; x < index; x++)
	{
		if ((x + 1) < index && temp->next == NULL)
		{
			return (NULL);
		}
		temp = temp->next;
	}
	return (temp);
}
