#include "main.h"

/**
 * _strpbrk - locates the first occurence of a string.
 * @s: the string to be searched.
 * @accept: the bytes to look for.
 *
 * Return: returns a pointer to the first byte that matches or NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0;
	int b = 0;

	while (*s)
	{
		if (accept[b] == '\0')
		{
			b = 0;
			s++;
		}
		if (s[a] == accept[b])
		{
			return (s);
		}
		if (s[a] != accept[b])
		{
			b++;
		}
	}
	return ('\0');
}
