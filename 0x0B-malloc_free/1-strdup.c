#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string.
 * @str: the string to duplicate.
 *
 * Return: duplicated string on success, NULL on error.
 */
char *_strdup(char *str)
{
	int size = 0, b;
	char *str_cpy;
	char *count = str;

	if (str == NULL)
		return (NULL);

	while (*count)
	{
		count++;
		size++;
	}

	str_cpy = malloc(sizeof(*str) * size + 1);

	if (str_cpy == NULL)
		return (NULL);

	for (b = 0; b < size; b++)
		str_cpy[b] = str[b];

	return (str_cpy);
}
