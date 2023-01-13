#include "hash_tables.h"

/**
 * shash_table_create - Creates a hash table
 * @size: Size of the hash table
 * Return: Pointer to the newly created hash table
 * or Null if failed
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;

	if (!size)
		return (NULL);

	table = calloc(1, sizeof(shash_table_t));
	if (!table)
		return (NULL);

	table->size = size;
	table->array = calloc(size, sizeof(shash_node_t *));
	if (!table->array)
	{
		free(table);
		return (NULL);
	}
	return (table);
}

/**
 * screate_item - Creates a key and value pair
 * @key: key strin
 * @value: Value string
 * Return: Pointer to item created
 */
shash_node_t *screate_item(const char *key, const char *value)
{
	shash_node_t *item = calloc(1, sizeof(shash_node_t));

	if (!item)
		return (0);

	item->key = strdup(key);
	if (!item->key)
	{
		free(item);
		return (0);
	}
	item->value = strdup(value);
	if (!item->value)
	{
		free(item);
		return (0);
	}
	return (item);
}

/**
 * shash_table_sort - Sorts the items before setting them
 * in the hash table
 * @table: Points to the hash table
 * @item: points to the items to sort
 * Return: Void
 */
void shash_table_sort(shash_table_t *table, shash_node_t *item)
{
	shash_node_t *head;

	if (!table)
		return;

	head = table->shead;
	if (!head || strcmp(item->key, head->key) < 0)
	{
		item->snext = head;
		table->shead = item;
		if (head)
			head->sprev = item;
		else
			table->stail = item;
		return;
	}
	while (head->snext && strcmp(item->key, head->snext->key) >= 0)
		head = head->snext;

	item->sprev = head;
	item->snext = head->snext;
	if (head->snext)
		head->snext->sprev = item;
	else
		table->stail = item;
	head->snext = item;
}

/**
 * shash_table_set -Adds an item to the hash table
 * @ht: Ponts to the new table
 * @key: key item
 * @value: value of the key
 * Return: 1 if it succeded, 0 othherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *item = NULL, *head;
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
	item = screate_item(key, value);
	if (!item)
		return (0);
	item->next = ht->array[index];
	ht->array[index] = item;
	shash_table_sort(ht, item);
	return (1);
}

/**
 * shash_table_get - returns an item from a hash table
 * @ht: the table
 * @key: string item
 * Return: key value
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *item;
	unsigned long int index;

	if (!ht || !key)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	item = ht->array[index];
	while (item)
	{
		if (strcmp(item->key, key) == 0)
			return (item->value);
		item = item->next;
	}
	return (NULL);
}
