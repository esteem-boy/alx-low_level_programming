#include "main.h"

/**
 * more_numbers - Function prints numbers from 0 to 14
 *
 * Return: Nothing
 */
void more_numbers(void)
{
	int n, num, fst_dgt, lst_dgt;

	n = 0;
	while (n < 10)
	{
		num = 0;
		while (num < 15)
		{
			fst_dgt = num / 10;
			lst_dgt = num % 10;
			if (num > 9)
			{
				_putchar('0' + fst_dgt);
			}

			_putchar('0' + lst_dgt);
			num++;
		}

		_putchar('\n');
		n++;
	}
}
