#include "main.h"

/**
 * times_table - this func print out time table from 0 up to 9
 *
 * Return: this type of func usually does not return any value
 *
 */
void times_table(void)
{
	int i;
	int j;
	int res;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			res = i * j;
			_putchar(res);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
