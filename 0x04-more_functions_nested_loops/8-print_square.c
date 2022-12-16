#include "main.h"

/**
 * print_square - prints #
 * @size: the size of the square to print
 *
 * Description: prints squares using # based on @size
 */
void print_square(int size)
{
	int height, width;

	if (size > 0)
	{
		for (height = 0; height < size; height++)
		{
			for (width = 0; width < size; width++)
				_putchar(35);

			if (height == size - 1)
				continue;
			_putchar(10);
		}
	}
	_putchar(10);
}
