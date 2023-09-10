#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	unsigned long int i, j;
	char * value_p;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
		return (0);

	value_p = strdup(value);
	if (value_p == NULL)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	for (j = i; ht->array[j]; j++)
	{
		if (strcmp(ht->array[j]->key, key) == 0)
		{
			free(ht->array[j]->value);
			ht->array[j]->value = value_p;
			return (1);
		}

	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value_p);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(NULL);
		return (0);
	}
	new->value = value_p;
	new->next = ht->array[i];
	ht->array[i] = new;
	return (1);
}
