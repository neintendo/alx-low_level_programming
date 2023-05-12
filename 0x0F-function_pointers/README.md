# 0x0F-function_pointers

**0-print_name.c:** function that prints a name.

- Prototype: void print_name(char *name, void (*f)(char *));

**1-array_iterator.c:** executes a function given as a parameter on each element of an array.

- Prototype: void array_iterator(int *array, size_t size, void (*action)(int));
where size is the size of the array and action is a pointer to the function to use.

**2-int_index.c:** searches for an integer.

- Prototype: int int_index(int *array, int size, int (*cmp)(int)); where size is the number of elements in the array `array`. `cmp` is a pointer to the function to be used to compare values. `int_index` returns the index of the first element for which the `cmp` function does not return `0`.
- If no element matches, return `-1`.
- If size <= 0, return `-1`.

**3-main.c:** a program that performs simple operations.

- Usage: `calc num1 operator num2`.
- Operator is one of the following:
- > +: addition
- > -: subtraction
- > *: multiplication
- > /: division
- > %: modulo
- The program prints the result of the operation, followed by a new line.
