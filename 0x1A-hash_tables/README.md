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

**3-hash_table_set.c:** function that adds an element to the hash table.

- Prototype: `int hash_table_set(hash_table_t *ht, const char *key, const char *value);`
- `ht` is the hash table you want to add or update the key/value to.
- `key` is the key.
  - `key` can not be an empty string.
- `value` is the value associated with the key.
  - `value` must be duplicated.
  - `value` can be an empty string.
- Returns: `1` if it succeeded, `0` otherwise.

**4-hash_table_get.c:** retrieves a value associated with a key.

- Prototype: `char *hash_table_get(const hash_table_t *ht, const char *key);`
- `ht` is the hash table you want to look into.
- `key` is the key you are looking for.
- Returns the value associated with the element, or `NULL` if key couldn’t be found.
