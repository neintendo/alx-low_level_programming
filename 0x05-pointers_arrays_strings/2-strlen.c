#include "main.h"

/**
 * _strlen - counts length of a string.
 * @s: the string to count.
 *
 * Description: counts the length of a string then outputs the value.
 * Return: returns the numerical of the length of the string.
 */
int _strlen(char *s)
{
	int i, count;

	i = *s;

	for (count = 0; *s != '\0'; i++, s++, count++)
		continue;
	return (count);
}
