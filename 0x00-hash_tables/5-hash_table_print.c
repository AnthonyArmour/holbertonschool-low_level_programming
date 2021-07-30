#include "hash_tables.h"
/**
 * hash_table_print - prints all elements of a hash table
 * @ht: hash_table
 * Return: None
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	int sig = 0;

	if (ht == NULL)
		return;
	putchar('{');
	for (unsigned long int x = 0; x < ht->size; x++)
	{
		temp = ht->array[x];
		while (temp != NULL)
		{
			if (sig == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			sig = 1;
			temp = temp->next;
		}
	}
	printf("}\n");
}
