#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the hash table.
 *
 * Return: A pointer to the newly created hash table, or NULL if it fails.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *pointer;
	unsigned long int i = 0;

	pointer = malloc(sizeof(hash_table_t));
	if (pointer == NULL)
	{
		return (NULL);
	}
	pointer->size = size;
	pointer->array = malloc(sizeof(hash_node_t *) * size);
	if (pointer->array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		pointer->array[i] = NULL;

	return (pointer);
}
