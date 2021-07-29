#include "hash_tables.h"
/**
 * hash_table_create - creates hash table
 * @size: size of array
 * Return: hash_table_t pointer
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL || size < 1)
		return (NULL);
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ht->array[i] = NULL;
	}
	ht->size = size;
	return (ht);
}
