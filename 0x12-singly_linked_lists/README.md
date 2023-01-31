## 0x12-singly_linked_lists.

**0-print_list.c:** prints all the elements of a list_t list.

- Prototype: size_t print_list(const list_t *h);
- Return: the number of nodes
- If str is NULL, print [0] (nil)

**1-list_len.c:**  returns the number of elements in a linked list_t list.

- Prototype: size_t list_len(const list_t *h);

**2-add_node.c:** adds a new node at the beginning of a list_t list.

- Prototype: list_t *add_node(list_t **head, const char *str);
- Return: the address of the new element, or NULL if it failed

**3-add_node_end.c:** adds a new node at the end of a list_t list.

- Prototype: list_t *add_node_end(list_t **head, const char *str);
- Return: the address of the new element, or NULL if it failed.

**4-free_list.c:** frees a list_t list.

- Prototype: void free_list(list_t *head);

