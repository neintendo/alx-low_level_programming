## 0x10-variadic_functions.

**0-sum_them_all.c:** returns the sum of all its parameters.

- Prototype: int sum_them_all(const unsigned int n, ...);
- If n == 0, return 0

**1-print_numbers.c:** prints numbers, followed by a new line.

- Prototype: void print_numbers(const char *separator, const unsigned int n, ...); where separator is the string to be printed between numbers and n is the number of integers passed to the function

**2-print_strings.c:** prints strings, followed by a new line.

- Prototype: void print_strings(const char *separator, const unsigned int n, ...); where separator is the string to be printed between the strings and n is the number of strings passed to the function

**3-print_all:** function that prints anything.

- Prototype: void print_all(const char * const format, ...); where format is a list of types of arguments passed to the function.
```
c: char
i: integer
f: float
s: char * (if the string is NULL, print (nil) instead
```
- any other char should be ignored
