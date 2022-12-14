#include "main.h"

/**
 * _islower - function to check a character
 * @c: the character to check
 *
 * Description: checks if a character is lowercase
 * Return: returns 1 on success
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
