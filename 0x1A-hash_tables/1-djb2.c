#include "hash_tables.h"

/**
 * hash_djb2 - Determine the hash value for a
 * given key.
 *
 * @str: The key to hash.
 *
 * Return: The hash value.
 *
 **/
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash_value = 0;
	int character = 0;

	hash_value = 5381;
	while ((character = *str++))
	{
		hash_value = ((hash_value << 5) + hash_value) + character;
	}

	return (hash_value);
}
