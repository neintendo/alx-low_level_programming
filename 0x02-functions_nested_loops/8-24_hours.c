#include "main.h"

/**
 * jack_bauer - prints time.
 * Description: prints time starting from 00:00 to 23:59
 *
 * Return: returns jack_bauer
 */
void jack_bauer(void)
{
	int hour = 0;
	int hour2 = 0;
	int minute = 48;
	int minute2 = 48;

	while (hour < 3)
	{
		_putchar(hour + '0');
		_putchar(hour2 + '0');
		_putchar(':');
		_putchar(minute);
		_putchar(minute2);
		_putchar(10);

		minute2++;
		if (minute2 > 57)
		{
			minute2 = 48;
			minute++;
		}
		if (minute > 53)
		{
			minute = 48;
			hour2++;
		}
		if (hour2 > 9)
		{
			hour2 = 0;
			hour++;
		}
		if (hour == 2 && hour2 > 3)
		{
			break;
		}
	}
}
