#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: points to the table
 * @key: key item with the value
 * Return: The value or Null if no key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *item;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (!index)
		return (NULL);

	item = ht->array[index];
	while (item != NULL)
	{
		if (strcmp(item->key, key) == 0)
			return (item->value);
		item = item->next;
	}

	return (NULL);
}
