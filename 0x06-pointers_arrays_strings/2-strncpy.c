#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: the destination string array.
 * @src: the source string array.
 * @n: the number of bytes.
 *
 * Return: returns @dest on success.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
