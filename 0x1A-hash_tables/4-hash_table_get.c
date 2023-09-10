#include "hash_tables.h"

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *pointer;
	unsigned long int i = 0;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}
	i = key_index((const unsigned char *) key, ht->size);
	if (i >= ht->size)
		return (NULL);

	pointer = ht->array[i];
	while (pointer && strcmp(pointer->key, key) != 0)
	{
		pointer = pointer->next;
	}
	return ((pointer = NULL) ? NULL : pointer->value);
}
