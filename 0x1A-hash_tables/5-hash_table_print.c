#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash_table
 * @ht: points to the hash_table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *items;
	char *flag = "";

	if (!ht || !ht->array)
		return;

	printf("{");
	while (index < ht->size)
	{
		items = ht->array[index];
		while (items != NULL)
		{
			printf("%s'%s': '%s'", comma, node->key, node->value);
			flag = ", ";
			items = items->next;
		}
		index++;
	}
	printf("}");

