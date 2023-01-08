#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash_table
 * @ht: points to the hash_table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *items;
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
			items = items->next;
		}
		index++;
	}
	printf("}\n");
}

