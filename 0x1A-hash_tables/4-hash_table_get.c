#include "hash_tables.h"

/**
 * *hash_table_get - Retrieve the value for a record
 * with tje given key.
 *
 * @ht: The memory address to the hash table.
 * @key: The key to the record to be saved.
 *
 * Return: The value for the given key
 *
 **/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current = NULL;
	int index = 0;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}

	return (NULL);
}
