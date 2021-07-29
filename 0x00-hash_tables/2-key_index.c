#include "hash_tables.h"
/**
 * key_index - gets index of a key
 * @key: key
 * @size: size of arrays of table
 * Return: index where key value pair should store
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
