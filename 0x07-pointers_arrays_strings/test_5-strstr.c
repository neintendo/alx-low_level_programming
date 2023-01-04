#include "main.h"

/**
 * _strstr - locates a character in a string.
 * @haystack: the string to be operated on.
 * @needle: the character to locate.
 *
 * Return: returns a pointer to the first occurence of the character.
 */
char *_strstr(char *haystack, char *needle)
{
	int a = 0;
	int b = 0;
	int count = 1;
	int check = 0;
	int loop = 0;
	char *count_n;
	char *clone_hstack;
	char *clone_ndl;

	count_n = needle;
	clone_hstack = haystack;
	clone_ndl = needle;

	while (*count_n)
	{
		count_n++;
		count++;
	}

	while (*needle)
	{
		while (clone_hstack[a] != clone_ndl[b])
		{
			b++;
		}

		if (clone_hstack[a] == clone_ndl[b])
		{
			a++;
			b++;
			check++;
			clone_hstack++;
		}

		if (b == count)
		{
			b = 0;
		}

		if (check == count)
		{
			clone_hstack = clone_hstack - count;
			return (count_n);
		}

		else if (check <= count)
		{
			loop++;
			a = loop;
			check = 0;
			clone_hstack = haystack;
		}
		else
		{	
			_putchar(48);
		}
	}
	return (count_n);
}
