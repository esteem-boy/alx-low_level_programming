#include "main.h"

/**
 * print_last_digit - this func print the last digit of a number
 *
 * @i: argument of the func
 *
 * Return: return the value of j
 *
 */

int print_last_digit(int i)
{
	int j;

	j = i % 10;

	if (i < 0)
	{
		j = -(j);
	}
	_putchar('0' + j);
	return (j);
}
