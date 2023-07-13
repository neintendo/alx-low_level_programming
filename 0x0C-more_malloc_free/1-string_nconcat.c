#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: the first string.
 * @s2: the second string.
 * @n: the number of bytes of @s2 to append.
 *
 * Return: returns pointer with concatenated strings.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat, *count = s1;
	unsigned int count_len = 0;
	unsigned int alloc, i, k;

	if (s1 != NULL)
	{
		while (*count)
		{
			count++;
			count_len++;
		}
	}

	alloc = count_len + n;
	concat = malloc(sizeof(*concat) * (alloc + 1));

	if (concat == NULL)
		return (NULL);

	if (s1 != NULL)
		for (i = 0; i < count_len; i++)
			concat[i] = s1[i];
	if (s1 == NULL)
	{
		for (k = 0, i = 0; k < n; i++, k++)
			concat[i] = s2[k];

		return (concat);
	}

	if (s2 != NULL)
		for (k = 0; k < n; k++, i++)
			concat[i] = s2[k];
	if (s2 == NULL)
		for (i = 0; i < count_len; i++)
			concat[i] = s1[i];

	return (concat);
}
