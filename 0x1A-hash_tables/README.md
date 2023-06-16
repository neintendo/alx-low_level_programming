# 0x1A. Hash Tables

**0-hash_table_create.c:** creates a hash table.

- Prototype: `hash_table_t *hash_table_create(unsigned long int size);`
  - `size` is the size of the array.

**1-djb2.c:** hash function implementing the djb2 algorithm.

- Prototype: `unsigned long int hash_djb2(const unsigned char *str);`

**2-key_index.c:** function that gives you the index of a key.

- Prototype: `unsigned long int key_index(const unsigned char *key, unsigned long int size);`
  - where `key` is the key.
  - and `size` is the size of the array of the hash table.
- Returns the index at which the key/value pair should be stored in the array of the hash table.
