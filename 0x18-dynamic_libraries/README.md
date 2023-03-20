## 0x18-dynamic_libraries.

**libdynamic.so:** contains all the functions listed below:

```
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
```
**main.h:** has prototypes of the above functions.

**1-create_dynamic_lib.sh:** creates a dynamic library called liball.so from all the .c files that are in the current directory.

**100-operations.so:** contains basic math functions listed below:

```
long int add(long int a, long int b);
long int sub(long int a, long int b);
long int mul(long int a, long int b);
long int div(long int a, long int b);
long int mod(long int a, long int b);
```
