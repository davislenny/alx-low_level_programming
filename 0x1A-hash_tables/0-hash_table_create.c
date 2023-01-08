#include "hash_table.h"

/**
 * hash_table_create - Creates a hash table
 * 
 * @size: Size of the array
 * Return: Pointer to the newly created hash table
 * or NULL if failed
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	if (!size)
		return (NULL);

	table = calloc(1, sizeof(hash_table_t));
	if (!table)
		return (NULL);
	table->size = size;
	table->array = calloc(size, sizeof(*array));
	if (!table->array)
	{
		free(table);
		return (NULL);
	}
	return (table);
}
