#include "main.h"

/**
* more_numbers - this func prints out numbers ranging from 0 to 14
*
* Return: functions of this type do necessarily have return anything
*
*/
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j + '0');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
