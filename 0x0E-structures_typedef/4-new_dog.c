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
	struct dog *temp = malloc(sizeof(struct dog));

	if (temp == NULL)
		return (NULL);
	temp->name = name;
	temp->age = age;
	temp->owner = owner;
	return (temp);
}
