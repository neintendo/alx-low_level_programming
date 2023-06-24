#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int a, len = 0, elem = 0;

	printf("{");
	for (a = 0; a < ht->size; a++)
	{
		if (ht->array[a] != NULL)
			len++;
	}
	for (a = 0; a < ht->size; a++)
	{
		if (ht->array[a] != NULL)
		{
			elem++;
			if (len != elem)
				printf("\'%s\': \'%s\', ", ht->array[a]->key, ht->array[a]->value);
			else
				printf("\'%s\': \'%s\'", ht->array[a]->key, ht->array[a]->value);
		}
	}
	printf("}\n");
}
