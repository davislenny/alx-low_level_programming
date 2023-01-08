#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: points to the table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *items, *temp;

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

