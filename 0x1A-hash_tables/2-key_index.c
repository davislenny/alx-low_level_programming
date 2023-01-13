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


/**
 * shash_table_print - Prints the sorted hash table
 * @ht: the table
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int index = 0;
	shash_node_t *items;
	char *flag = "";

	if (!ht || !ht->array)
		return;

	printf("{");
	while (index < ht->size)
	{
		items = ht->array[index];
		while (items)
		{
			printf("%s'%s': '%s'", flag, items->key, items->value);
			flag = ", ";
			items = items->snext;
		}
		index++;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints table items in reverse
 * @ht: the table
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned long int index = 0;
	shash_node_t *items;
	char *flag = "";

	if (!ht)
		return;

	printf("{");
	while (index < ht->size)
	{
		items = ht->array[index];
		while (items)
		{
			printf("%s'%s': '%s'", flag, items->key, items->value);
			flag = ", ";
			items = items->sprev;
		}
		index--;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes the table
 * @ht: the table
 * Return: void
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int index = 0;
	shash_node_t *items, *temp;

	if (ht)
	{
		while (index < ht->size)
		{
			items = ht->array[index];
			while (items)
			{
				temp = items;
				items = items->next;
				free(temp->key);
				free(temp->value);
				free(temp);
			}
			index++;
		}
	}
	free(ht->array);
	free(ht);
}
