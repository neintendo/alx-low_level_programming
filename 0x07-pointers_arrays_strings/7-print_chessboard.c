#include "main.h"

/**
 * print_chessboard - prints a chessboard.
 * @a: array with chessboard characters.
 *
 * Return: returns 1 on success.
 */
void print_chessboard(char (*a)[8])
{
	int index, index_b;

	for (index = 0; index < 8; index++)
	{
		for (index_b = 0; index_b < 8; index_b++)
		{
			_putchar(a[index][index_b]);

			if (index_b == 8)
			{
				_putchar(10);
				index_b = 0;
			}
		}
		_putchar(10);
	}
}
