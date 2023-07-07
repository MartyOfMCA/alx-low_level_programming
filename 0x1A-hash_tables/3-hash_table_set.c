#include "hash_tables.h"

/**
 * hash_table_set - Add an element to the hash table.
 *
 * @ht: The memory address to the hash table.
 * @key: The key to the record to be saved.
 * @value: The value for the record to be saved.
 *
 * Return: ADD_SUCCESS when the operation succeeds
 * otherwise ADD_FAILURE.
 *
 **/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node = NULL, *current = NULL;
	unsigned long int index = 0;
	int ret_value = ADD_SUCCESS;

	if (ht == NULL || key == NULL || strlen(key) == 0)
	{
		ret_value = ADD_FAILURE;
	}
	else
	{
		index = key_index((const unsigned char *)key, ht->size);
		current = ht->array[index];
		while (current != NULL)
		{
			if (strcmp(current->key, key) == 0)
			{
				free(current->value);
				current->value = strdup(value);
				break;
			}
			current = current->next;
		}
		if (current == NULL)
		{
			node = malloc(sizeof(hash_node_t));
			if (node == NULL)
			{
				ret_value = ADD_FAILURE;
			}
			else
			{
				node->key = strdup(key);
				node->value = strdup(value);
				node->next = ht->array[index];
				ht->array[index] = node;
			}
		}
	}

	return (ret_value);
}
