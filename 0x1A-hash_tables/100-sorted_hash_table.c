#include "hash_tables.h"


/**
 * shash_table_create - Create a hash table
 *
 * @size: The size for the hash table
 *
 * Return: The memory address to the newly
 * created hash table.
 *
 **/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *shash_table = NULL;

	shash_table = malloc(sizeof(shash_table_t));
	if (shash_table == NULL)
	{
		return (NULL);
	}
	shash_table->size = size;
	shash_table->array = malloc(sizeof(shash_node_t *) * size);
	if (shash_table->array == NULL)
	{
		return (NULL);
	}
	_initarray(shash_table->array, size);
	shash_table->shead = NULL;
	shash_table->stail = NULL;

	return (shash_table);
}

/**
 * _initarray - Initialize each node in the array of
 * nodes to the NULL value.
 *
 * @h_node: An array of node elements.
 * @size: The size of the array.
 *
 **/
void _initarray(shash_node_t **h_node, unsigned long int size)
{
	unsigned long int index = 0;

	while (index < size)
	{
		h_node[index] = NULL;
		index++;
	}
}

/**
 * shash_table_set - Add an element to the sorted
 * hash table.
 *
 * @ht: The memory address to the hash table.
 * @key: The key to the record to be saved.
 * @value: The value for the record to be saved.
 *
 * Return: ADD_SUCCESS when the operation succeeds
 * otherwise ADD_FAILURE.
 *
 **/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *node = NULL, *current = NULL;
	unsigned long int index = 0;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
	{
		return (ADD_FAILURE);
	}
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
	if (current  == NULL)
	{
		node = malloc(sizeof(shash_node_t));
		if (node == NULL)
		{
			return (ADD_FAILURE);
		}
		node->key = strdup(key);
		node->value = strdup(value);
		node->next = ht->array[index];
		ht->array[index] = node;
		node->sprev = NULL;
		node->snext = NULL;
	}

	return (ADD_SUCCESS);
}

/**
 * shash_table_get - Retrieve the value for a record
 * with the given key.
 *
 * @ht: The memory address to the hash table.
 * @key: The key to the record to be saved.
 *
 * Return: The value for the given key
 *
 **/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *current = NULL;
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

/**
 * shash_table_print - Print the records in a sorted
 * hash table.
 *
 * @ht: The given hash table.
 *
 **/
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current = NULL;
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
		if (records_found > 0 && (index + 1) < ht->size &&
				ht->array[index + 1] != NULL)
		{
			printf(", ");
		}
		index++;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Print the records in a sorted
 * hash table in the reversed order.
 *
 * @ht: The given hash table.
 *
 **/
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current = NULL;
	unsigned long int index = 0, threshold = 0;
	int records_found = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	index = ht->size - 1;
	while (index > threshold)
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
		if (records_found > 0 && (index - 1) >= threshold &&
				ht->array[index - 1] != NULL)
		{
			printf(", ");
		}
		index--;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Delete records in a sorted
 * hash table.
 *
 * @ht: The given hash table
 *
 **/
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current = NULL, *tmp = NULL;
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
			free(tmp->sprev);
			free(tmp->snext);
			free(tmp);
		}

		index++;
	}

	free(ht->array);
	free(ht->shead);
	free(ht->stail);
	free(ht);
}
