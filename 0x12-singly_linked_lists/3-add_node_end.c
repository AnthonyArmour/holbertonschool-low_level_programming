#include "lists.h"
/**
 * add_node_end - adds node to the end of the list
 * @head: ptr
 * @str: str ptr
 * Return: ptr to list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *trav;
	list_t *h;

	if (*head == NULL)
	{
		h = malloc(sizeof(size_t));
		if (h == NULL)
			return (NULL);
		h->str = strdup((char *)str);
		if (h->str == NULL)
		{
			free(h);
			return (NULL);
		}
		h->len = _strlen(h->str);
		h->next = NULL;
		*head = h;
		return (h);
	}
	if (str == NULL)
		return (NULL);
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup((char *)str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->len = _strlen(temp->str);
	temp->next = NULL;
	trav = *head;
	while (trav->next != NULL)
	{
		trav = trav->next;
	}
	trav->next = temp;
	return (temp);
}
/**
 * _strlen - len
 * @s: str
 * Return: len
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
