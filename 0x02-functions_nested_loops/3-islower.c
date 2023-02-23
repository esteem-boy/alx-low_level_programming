#include <ctype.h>
#include "main.h"

/**
 * _islower - check the code.
 *
 * int c - Is the arguement of th function islower
 *
 * Return: Always 0.
 */
int _islower(int c) /* int c - is the argument of the function */
{
	if (_islower(c) != 0)
	{
		c = _islower('H');
		_putchar(c + '0');
		c = _islower('o');
		_putchar(c + '0');
		c = _islower(108);
		_putchar(c + '0');
		_putchar('\n');
		return (1);
	}
	else
	{
		return (0);
	}
}
