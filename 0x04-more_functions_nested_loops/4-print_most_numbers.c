#include "main.h"

/**
* print_numbers - this func prints out numbers ranging from 0 to 9
*
* Return: this returns 1 if is the char checked is true and 0 if otherwise
*
*/
void print_most_numbers(void)
{
	int i;

	i = 0;
		while (i <= 9)
		{
			if ((i != 2) && (i != 4))
			{
				continue;
			}
			else
			{
				_putchar('0' + i);
				i++;
			}
		}
	_putchar('\n');
}
