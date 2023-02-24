#include "main.h"

/**
* print_line - this func prints out a horizontal line on the terminal
*
* @n: it is the argument of the func
*
* Return: functions of this type do necessarily have return anything
*
*/
void print_line(int n)
{
	int  i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
