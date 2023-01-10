#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: returns concatenated strings on success or
 *	   NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *count_s1, *count_s2;
	char *concat, *string_one, *string_two;
	int a, b, malloc_size;
	int size1 = 0, size2 = 0;
	char *newline = "\0";

	if (s1 != NULL)
	{
		string_one = count_s1 = s1;
		while (*count_s1)
		{
			count_s1++;
			size1++;
		}
	}
	if (s2 != NULL)
	{
		string_two = count_s2 = s2;
		while (*count_s2)
		{
			count_s2++;
			size2++;
		}
	}

	malloc_size = size1 + size2;
	concat = malloc(sizeof(*concat) * (malloc_size + 1));

	if (concat == NULL)
		return (NULL);

	for (a = 0; a == size1; a++)
		concat[a] = newline[a];
	for (a = 0; a < size1; a++)
		concat[a] = string_one[a];
	for (b = 0; b < size2; a++, b++)
		concat[a] = string_two[b];

	return (concat);
}
