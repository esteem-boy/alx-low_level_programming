#include "main.h"

/**
* print_most_numbers - this func prints out numbers ranging from 0 to 9
*
* Return: this returns 1 if is the char checked is true and 0 if otherwise
*
*/
void print_most_numbers(void)
{
	int i;

		for (i = 0; i <= 9; i++)
		{
			if (!(i == 2 || i == 4))
			{
				_putchar(i + '0');
			}
		}
	_putchar('\n');
}
