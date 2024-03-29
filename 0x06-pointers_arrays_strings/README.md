# 0x06. C - More pointers, arrays and strings.

**0-strcat.c:** concatenates two strings.

- Prototype: char *_strcat(char *dest, char *src);
- This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
- Returns a pointer to the resulting string dest

**1-strncat.c:** concatenates two strings.

- Prototype: char *_strncat(char *dest, char *src, int n);
- The _strncat function is similar to the _strcat function, except that
        it will use at most n bytes from src; and
        src does not need to be null-terminated if it contains n or more bytes
- Return a pointer to the resulting string dest

**2-strncpy.c:** copies a string.

- Prototype: char *_strncpy(char *dest, char *src, int n);

**3-strcmp.c:** compares two strings.

- Prototype: int _strcmp(char *s1, char *s2);

**4-rev_array.c:** reverses the content of an array of integers.

- Prototype: void reverse_array(int *a, int n); where n is the number of elements of the array

**5-string_toupper.c:** changes all lowercase letters of a string to uppercase.

- Prototype: char *string_toupper(char *);

**6-cap_string.c:** capitalizes all words of a string.

- Prototype: char *cap_string(char *);
- Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }

**7-leet.c:** encodes a string into 1337.

- Letters a and A should be replaced by 4
- Letters e and E should be replaced by 3
- Letters o and O should be replaced by 0
- Letters t and T should be replaced by 7
- Letters l and L should be replaced by 1
- Prototype: char *leet(char *);

**100-rot13.c:** encodes a string using rot13.

- Prototype: char *rot13(char *);
