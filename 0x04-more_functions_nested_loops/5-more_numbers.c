#include "main.h"
#include <unistd.h>

/**
 * more_numbers - prints 1 to 14
 *
 * Description: prints numbers 1 to 14, 10 times.
 */
void more_numbers(void)
{
	int one, two, three, loop;

	loop = 1;

	do {
		for (one = 0; one < 10; one++)
	{
		_putchar(one + '0');

		if (one == 9)
		{
			for (three = 1, two = 0; two < 5; two++)
			{
				_putchar(three + '0');
				_putchar(two + '0');
			}
		}
	}
		write(1, "\n", 1);
		loop++;
	} while (loop <= 10);
}
