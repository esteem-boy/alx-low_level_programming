#include "main.h"

/**
 * _islower - This func prints all English alphabet 10 times
 *
 * c - is the arguement of the function
 *
 * return: (1) or 0 depending on the outcome of the func
 */

int _islower(int c)
{

	c = 'a';

	for (; c <= 'z'; c++)
	{
		if (_islower(c) != 0)
		{
			_putchar(c + '0');
			return (1);
		}
	}
	_putchar('\n');
	return (0);
}
