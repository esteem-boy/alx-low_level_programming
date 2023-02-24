#include "main.h"

/**
* print_square - this func prints out a horizontal line on the terminal
*
* @size: it is the argument of the func
*
* Return: functions of this type do necessarily have return anything
*
*/
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
			_putchar('#');
			}
			_putchar('\n');
		}
	}
}
