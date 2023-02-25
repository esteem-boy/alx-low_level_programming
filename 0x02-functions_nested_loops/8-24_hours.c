#include "main.h"

/**
 * jack_bauer - this func prints out every minute of the day
 *
 * Return: an integer 0 from the successful execution of the project
 *
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			_putchar('0' + (i / 10));
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');

		}
	}
}
