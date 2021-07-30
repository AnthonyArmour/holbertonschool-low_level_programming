#include "hash_tables.h"
/**
 * hash_table_delete - deletes and frees hash table
 * @ht: hash_table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp = NULL, *trav = NULL;
	unsigned long int x = 0;

	if (ht == NULL)
		return;
	for (x = 0; x < ht->size; x++)
	{
		trav = ht->array[x];
		while (trav != NULL)
		{
			temp = trav;
			trav = trav->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
	}
