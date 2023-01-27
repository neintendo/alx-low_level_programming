#include "main.h"

/**
 * string_toupper - changes lowercase letters to uppercase.
 * @a: the string to process.
 *
 * Return: returns processed string on success.
*/
char *string_toupper(char *a)
{
	int i = 0;

	while (a[i])
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] = a[i] - 32;
		i++;
	}

	return (a);
}
