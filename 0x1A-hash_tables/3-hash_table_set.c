#include "hash_tables.h"

/**
 * create_item - Creates a key and value pair
 * @key: key string
 * @value: value string
 * Return: Pointer to item created
 */
hash_node_t *create_item(const char *key, const char *value)
{
	hash_node_t *item = calloc(1, sizeof(hash_node_t));

	if (!item)
		return (0);

	item->key = strdup(key);
	if (!item->key)
	{
		free(item);
		return (0);
	}
	item->value = strdup(value)
	{
		free(item->key);
		free(item);
		return (0);
	}
	return (item);
}

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: points to the new table
 * @key: key item
 * @value: value item
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item = NULL, *head;
	unsigned long int index;
	char *val;

	if (!ht || !key || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];
	while (head)
	{
		if (!strcmp(key, head->key))
		{
			val = strdup(value);
			if (!val)
				return (0);
			free(head->value);
			head->value = val;
			return (1);
		}
		head = head->next;
	}
	item = create_item(key, value);
	if (!item)
		return (0);
	item->next = ht->array[index];
	ht->array[index] = item;
	return (1);
}

