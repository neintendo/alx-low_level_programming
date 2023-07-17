# 0x0E: Structures & Typedef

**dog.h:** header file for the dog structure.

**1-init_dog.c:** a function that initializes a variable of type struct dog.

- Prototype: `void init_dog(struct dog *d, char *name, float age, char *owner);`.

**2-print_dog.c:** a function that prints a struct dog.

- Prototype: `void print_dog(struct dog *d);`
- If an element of `d` is `NULL`, print `(nil)` instead of this element. (if name is `NULL`, print `Name: (nil)`)
- If `d` is `NULL` print nothing.

**4-new_dog.c:** a function that creates a new dog.

- Prototype: `dog_t *new_dog(char *name, float age, char *owner);`

**5-free_dog.c:**  a function that frees dogs.

- Prototype: `void free_dog(dog_t *d);`
