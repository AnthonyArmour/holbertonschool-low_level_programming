#include "lists.h"
/**
 * add_node - adds node
 * @head: ptr
 * @str: ptr
 * Return: list_t ptr
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (str == NULL)
		return (NULL);
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = _strdup((char *)str);
	if (temp->str == NULL)
		return (NULL);
	temp->len = (unsigned int)_strlen(temp->str);
	temp->next = *head;
	*head = temp;
	return (*head);
}





/**
 * _strdup - dups
 * @str: str
 * Return: str
 */
char *_strdup(char *str)
{
	int x = 0;
	char *ptr = NULL;

	if (str == NULL)
	{
		return (NULL);
	}
	ptr = (char *)malloc(_strlen(str) + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	while (str[x])
	{
		ptr[x] = str[x];
		x++;
	}
	ptr[x] = '\0';
	return (ptr);
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
