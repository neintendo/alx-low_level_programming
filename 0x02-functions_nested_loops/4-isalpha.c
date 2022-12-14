#include "main.h"

/**
 * _isalpha - function to check a character
 * @c: the character to check
 *
 * Description: checks if a character is alpha
 * Return: returns 1 on success
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
