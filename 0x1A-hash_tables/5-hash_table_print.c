#include "hash_tables.h"

/**
 * hash_table_print - Print the records in a hash
 * table.
 *
 * @ht: The given hash table.
 *
 **/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current = NULL;
	unsigned long int index = 0;
	int records_found = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	while (index < ht->size)
	{
		current = ht->array[index];
		while (current != NULL)
		{
			records_found++;
			printf("'%s': '%s'", current->key, current->value);
			if (current->next != NULL)
			{
				printf(", ");
			}
			current = current->next;
		}
		if (records_found > 0 && ht->array[index + 1] != NULL)
		{
			printf(", ");
		}
		index++;
	}
	printf("}\n");
}
