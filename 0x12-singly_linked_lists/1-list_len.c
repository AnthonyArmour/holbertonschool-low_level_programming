#include "lists.h"
/**
 * list_len - finds num of elements in list
 * @h: ptr
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);
	while (h->next != NULL)
	{
		count++;
		h = h->next;
	}
	count++;
	return (count);
}
