## 0x13-more_singly_linked_lists.

**0-print_listint.c:** prints all the elements of a listint_t list.

- Prototype: size_t print_listint(const listint_t *h);
- Return: the number of nodes

**1-listint_len.c:** returns the number of elements in a linked listint_t list.

- Prototype: size_t listint_len(const listint_t *h);

**2-add_nodeint.c:** adds a new node at the beginning of a listint_t list.

- Prototype: listint_t *add_nodeint(listint_t **head, const int n);
- Return: the address of the new element, or NULL if it failed

**3-add_nodeint_end.c:** adds a new node at the end of a listint_t list.

- Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
- Return: the address of the new element, or NULL if it failed

**4-free_listint.c:** frees a listint_t list.

- Prototype: void free_listint(listint_t *head);

**5-free_listint2.c:** frees a listint_t list.

- Prototype: void free_listint2(listint_t **head);
- The function sets the head to NULL

**6-pop_listint.c:** deletes the head node of a listint_t linked list, and returns the head node’s data (n).

- Prototype: int pop_listint(listint_t **head);
- If the linked list is empty return 0

**7-get_nodeint.c:** returns the nth node of a listint_t linked list.

- Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index); where index is the index of the node, starting at 0.
- If the node does not exist, return NULL

