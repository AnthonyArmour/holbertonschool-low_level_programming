#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees struct
 * @d: struct dog pointer
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d);
}
