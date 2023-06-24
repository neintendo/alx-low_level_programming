#include "hash_tables.h"
#include <stdlib.h>

unsigned long int hash_djb2_cp2(const char *str);

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: the hash table.
 * @key: the key.
 *
 * Return: the value associated with the element or NULL on error.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index = (hash_djb2_cp2(key) % ht->size);

	if (ht->array[index] != NULL)
		return (ht->array[index]->value);
	else
		return (NULL);

	return (NULL);
}

/**
 * hash_djb2_cp2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2_cp2(const char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
