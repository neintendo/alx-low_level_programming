## 0x0C-more_malloc_free.

**0-malloc_checked.c:** allocates memory using malloc.

- Prototype: void *malloc_checked(unsigned int b);
- Returns a pointer to the allocated memory
- if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98
