#include "lists.h"
/**
 * print_list - prints singly linked list
 * @h: pointer
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	if (!h)
		return (n);
	while (h->next != NULL)
	{
		n++;
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	if (h->str == NULL)
	{
		printf("[0] (nil)\n"), n++;
	}
	else
		printf("[%u] %s\n", h->len, h->str), n++;
	return (n);
}
