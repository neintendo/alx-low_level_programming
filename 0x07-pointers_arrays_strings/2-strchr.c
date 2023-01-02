#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: the string to be operated on.
 * @c: the character to locate.
 *
 * Return: returns a pointer to the first occurence of the character.
 */
char *_strchr(char *s, char c)
{
	char array[999999];
	char *p;
	int i = 0;

	p = array;

	while (*s != c)
	{
		s++;
	}
	while (*s)
	{
		array[i] = *s;
		s++;
		i++;
	}
	if (array != s)
	{
		return (p);
	}
	else
	{
	return ('\0');
	}
}
