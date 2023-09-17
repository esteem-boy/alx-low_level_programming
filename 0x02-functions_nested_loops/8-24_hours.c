#include "main.h"

/**
 * jack_bauer - Function prints every minute of the day
 *
 * Return: Nothing
 */
void jack_bauer(void)
{
	int hour_count, mins_count;
	int hr_tenz, hr_units;
	int mins_tenz, mins_units;

	for (hour_count = 0; hour_count < 24; hour_count++)
	{
		hr_tenz = hour_count / 10;
		hr_units = hour_count % 10;

		for (mins_count = 0; mins_count < 60; mins_count++)
		{
			mins_tenz = mins_count / 10;
			mins_units = mins_count % 10;

			_putchar('0' + hr_tenz);
			_putchar('0' + hr_units);

			_putchar(58);
			_putchar(mins_tenz + '0');
			_putchar(mins_units + '0');
			_putchar('\n');
		}
	}
}
