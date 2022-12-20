#include "main.h"

/**
 * _strcpy - copies a string
 * @dest: the destination array.
 * @src: the source array.
 *
 * Description: copies a string from array src to array dest.
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] && *src != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
