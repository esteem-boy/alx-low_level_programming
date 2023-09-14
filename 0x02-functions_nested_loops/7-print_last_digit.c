#include "main.h"

/**
 * print_last_digit - This function prints the last digit of a number
 *
 * @num: Param of the functio
 *
 * Return: Function must return the value of num
 */
int print_last_digit(int num)
{
	long int ret_val = num;

	if (ret_val < 0)
	{
		ret_val *= -1;
		ret_val %= 10;
		_putchar('0' + ret_val);
	}
	else if (ret_val == 0)
	{
		_putchar('0' + ret_val);
	}
	else if (ret_val > 0)
	{
		ret_val %= 10;
		_putchar('0' + ret_val);
	}

	/* ret_val = (num % 10); */
	return (ret_val);
}
