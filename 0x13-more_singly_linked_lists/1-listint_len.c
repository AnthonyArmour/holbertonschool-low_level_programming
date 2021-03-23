#include "lists.h"
/**
 * listint_len - returns num of elements
 * @h: head
 * Return: num of elements
 *
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	size_t num = 0;

	if (!h)
		return (num);
	temp = h;
	while (temp->next != NULL)
	{
		num++;
		temp = temp->next;
	}
	num++;
	return (num);
}
