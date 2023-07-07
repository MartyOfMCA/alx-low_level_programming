#include "hash_tables.h"

/**
 * hash_table_delete - Delete records in a hash
 * table.
 *
 * @ht: The given hash table
 *
 **/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current = NULL, *tmp = NULL;
	unsigned long int index = 0;

	if (ht == NULL)
	{
		return;
	}

	while (index < ht->size)
	{
		current = ht->array[index];

		while (current != NULL)
		{
			tmp = current;
			current = current->next;
			free(tmp->value);
			free(tmp->key);
			free(tmp);
		}

		index++;
	}

	free(ht->array);
	free(ht);
}
