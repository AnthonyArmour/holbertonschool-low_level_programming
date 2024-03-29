#include "hash_tables.h"
/**
 * hash_table_get - gets value based on key
 * @ht: hash_table
 * @key: key
 * Return: value corresponding to key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash;
	hash_node_t *temp;

	if (key == NULL || ht == NULL)
		return (NULL);
	hash = hash_djb2((const unsigned char *)key);
	temp = ht->array[key_index((const unsigned char *)key, ht->size)];
	while (temp != NULL)
	{
		if (hash_djb2((const unsigned char *)temp->key) == hash)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
