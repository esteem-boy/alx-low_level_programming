#include "main.h"

/**
 * print_numbers - Function prints numbers ranginf from 0 to 9 using _putchar
 *
 * Return Nothing
 */
void print_numbers(void)
{
	int num;

	num = 48;
	while (num < 58)
	{
		_putchar(num);
		num++;
	}

	_putchar('\n');
}
