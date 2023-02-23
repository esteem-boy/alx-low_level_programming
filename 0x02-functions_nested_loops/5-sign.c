#include "main.h"

/**
 * print_sign - this func print signs
 *
 * @n: this is the argument of the func
 *
 * Return: this returns int between the -1 and 1 depending on the outcome
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}
	return (0);
}
