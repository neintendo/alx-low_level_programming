# 0x1A. Hash Tables

**0-hash_table_create.c:** creates a hash table.

- Prototype: `hash_table_t *hash_table_create(unsigned long int size);`
  - `size` is the size of the array.

**1-djb2.c:** hash function implementing the djb2 algorithm.

- Prototype: `unsigned long int hash_djb2(const unsigned char *str);`
