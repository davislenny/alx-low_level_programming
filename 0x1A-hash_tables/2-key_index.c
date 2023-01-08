#include "hash_tables.h"

/**
 * key_index - Finds index of a key
 * @key: string used as key
 * @size: Size of the array of the hash table
 * Return: Index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (!size)
		return (0);
	return (hash_djb2(key) % size);
}
