#include "lists.h"
/**
 * print_listint - prints list
 * @h: head of list
 * Return: num of nodes
 *
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t x = 0;

	if (!h)
		return (x);
	temp = h;
	while (temp->next != NULL)
	{
		printf("%d\n", temp->n), x++;
		temp = temp->next;
	}
	printf("%d\n", temp->n), x++;
	return (x);
}
