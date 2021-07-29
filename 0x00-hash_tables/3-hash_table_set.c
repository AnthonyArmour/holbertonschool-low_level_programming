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
	unsigned long int idx = hash_djb2((const unsigned char *)key) % ht->size;
	hash_node_t *new = NULL;

	if (strlen(key) == 0)
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
	if (ht->array[idx] != NULL)
		new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
