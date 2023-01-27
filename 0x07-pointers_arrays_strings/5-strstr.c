#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring.
 * @haystack: the string to be searched in.
 * @needle: the string to search for.
 *
 * Return: returns first occurrence of the substring @needle.
*/
char *_strstr(char *haystack, char *needle)
{
	int count = 0, needle_len = 0;
	char *counter = needle;
	char *needle_reset = needle;
	char *init = haystack;
	char *null_str = "nil";

	while (*counter)
	{
		counter++;
		count++;
	}

	while (*haystack)
	{
		init = haystack;

		while ((*needle == *haystack) && *haystack != '\0')
		{
			needle++;
			haystack++;
			needle_len++;
		}
		if (needle_len == count)
			return (init);

		if (needle_len != count)
		{
			needle = needle_reset;
			needle_len = 0;
		}

		haystack++;
	}
	return (null_str);
}
