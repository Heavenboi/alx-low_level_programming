#include "hash_tables.h"

/**
 * key_index - Returns the index at which a key/value pair should be stored
 * in the hash table's array.
 * @key: The key (string) to hash.
 * @size: The size of the hash table's array.
 *
 * Return: The index at which to store the key/value pair.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
