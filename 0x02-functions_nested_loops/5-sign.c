#include "main.h"

/**
 * print_sign - Function prints the sign of a number
 *
 * @n: parameter of the function
 *
 * Return: (1) if n > 0, 0 if n = 0 and -1 if otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

	return (0);
}
