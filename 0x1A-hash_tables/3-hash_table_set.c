#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

hash_node_t *create_item(const char *key, const char *value);
unsigned long int hash_djb2_cp(const char *str);

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table.
 * @key: the key.
 * @value: value associated with the @key.
 *
 * Return: 1 on success, 0 on error.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index;
	hash_node_t *current_item;
	hash_node_t *item = create_item(key, value);

	if (key != NULL)
		index = (hash_djb2_cp(key) % ht->size);
	else
		return (0);

	current_item = ht->array[index];

	if (current_item == NULL)
		ht->array[index] = item;
	else
	{
		if (strcmp(current_item->key, key) == 0)
		{
			strcpy(ht->array[index]->value, value);
			return (1);
		}
		ht->array[0] = item;
	}
	return (1);
}

/**
 * create_item - allocates memory for a key and a value.
 * @key: the key.
 * @value: the value associated with the @key.
 *
 * Return: the newly allocated item.
 */
hash_node_t *create_item(const char *key, const char *value)
{
	hash_node_t *item = (hash_node_t *)malloc(sizeof(hash_node_t));

	item->key = (char *)malloc(strlen(key) + 1);
	item->value = (char *)malloc(strlen(value) + 1);
	strcpy(item->key, key);
	strcpy(item->value, value);
	return (item);
}

/**
 * hash_djb2_cp - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2_cp(const char *str)
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
