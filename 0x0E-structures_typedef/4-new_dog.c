#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates new structure
 * @name: string
 * @age: float
 * @owner: string
 * Return: pointer to struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *temp;
	char *temp_name;
	char *temp_owner;

	(void)age;
	temp  = malloc(sizeof(struct dog));
	if (temp == NULL)
		return (NULL);
	temp_name = malloc(_strlen(name) + 1);
	if (temp_name == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp_owner = malloc(_strlen(owner) + 1);
	if (temp_owner == NULL)
	{
		free(temp);
		free(temp_name);
		return (NULL);
	}
	temp->name = _strcpy(temp_name, name);
	temp->owner = _strcpy(temp_owner, owner);
	return (temp);
}
/**
 * _strcpy - copies str
 * @dest: str
 * @src: str
 * Return: str
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;

	for (; *(src + x) != '\0'; x++)
	{
		*(dest + x) = *(src + x);
	}
	*(dest + x) = *(src + x);
	return (dest);
}
/**
 * _strlen - len
 * @s: input
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
