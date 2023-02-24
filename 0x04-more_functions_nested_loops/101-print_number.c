#include "main.h"

/**
* print_number- this func prints out a horizontal line on the terminal
*
* @n: it is the argument of the func
*
* Return: functions of this type do necessarily have return anything
*
*/
void print_number(int n)
{
	unsigned int = x;

	if (n < 0)
	{
		x = -n;
		_putchar('-');
	}
	else
	{
		x = n;
	}
	if (x / 10)
	{
		print_number(x / 10);
	}
	else
	{
		_putchar((x % 10) + '0')
	}
}
