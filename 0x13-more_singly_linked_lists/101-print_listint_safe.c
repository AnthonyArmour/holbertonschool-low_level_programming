#include "lists.h"
/**
 * print_listint_safe - prints linked list
 * @head: head
 * Return: num of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *trav;
	size_t count = 0;
	int x = 0;
	const listint_t *address[20];

	if (!head)
		return (0);
	trav = head;
	while (trav)
	{
		count++;
		printf("[%p] %d\n", (void *)trav, trav->n);
		address[x] = trav;
		x++;
		if (end_list(trav->next, address) == 0)
			trav = trav->next;
		else
		{
			printf("-> [%p] %d\n", (void *)trav->next, trav->next->n);
			break;
		}
	}
	return (count);
}
/**
 * end_list - finds end of linked list
 * @trav: node
 * @address: array of previous nodes
 * Return: 1 or 0
 */
int end_list(const listint_t *trav, const listint_t *address[])
{
	int x = 0, ret = 0;

	while (address[x] != NULL)
	{
		if (trav == address[x])
		{
			ret = 1;
			break;
		}
		x++;
	}
	return (ret);
}
