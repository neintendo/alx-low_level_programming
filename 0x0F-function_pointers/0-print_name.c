#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name.
 *
 * @name: the name to be printed.
 * @f: a function returning characters.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		(*f)(name);
	else
		exit(0);
}
