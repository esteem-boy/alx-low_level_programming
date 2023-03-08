#include <stdio.h>
#include "main.h"

/**
 * print_number - function prints numbers
 *
 * @n: func argument
 *
 * Return: nothing
 */
void print_number(int n)
{
	int n1;

	n1 = n;
	if (n < 0)
	{
		_putchar("-");
		n1 = -n;
	}
	if (n / 10 != 0)
	{
		print_number(n1 / 10);
	}
	_putcha(r(n1 % 10) + '0');
}
