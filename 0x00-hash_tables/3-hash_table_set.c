#include "hash_tables.h"
/**
 * hash_table_set - inserts item into table
 * @ht: table
 * @key: key
 * @value: value
 * Return: success value
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx, hash, exists;
	hash_node_t *new = NULL;

	if (strlen(key) == 0 || ht == NULL)
		return (0);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	if (new->key == NULL)
		return (0);
	new->value = strdup(value);
	if (new->value == NULL)
		return (0);
	hash = hash_djb2((const unsigned char *)key);
	idx = hash % ht->size;
	if (ht->array[idx] != NULL)
		exists = hash_djb2((const unsigned char *)ht->array[idx]->key);
	if (exists != hash)
	{
		new->next = ht->array[idx];
	}
	ht->array[idx] = new;
	return (1);
}
