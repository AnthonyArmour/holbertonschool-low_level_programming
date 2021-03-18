#include "lists.h"
/**
 * print_list - prints singly linked list
 * @h: pointer
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	list_t *traverse;
	size_t n = 0;

	traverse = (list_t *)h;
	while (traverse->next != NULL)
	{
		n++;
		if (traverse->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%u] %s\n", traverse->len, traverse->str);
		traverse = traverse->next;
	}
	if (traverse->str == NULL)
	{
		printf("[0] (nil)\n"), n++;
	}
	else
		printf("[%u] %s\n", traverse->len, traverse->str), n++;
	return (n);
}
