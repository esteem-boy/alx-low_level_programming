#include "main.h"

/**
* print_numbers - this func prints out numbers ranging from 0 to 9
*
* Return: this returns 1 if is the char checked is true and 0 if otherwise
*
*/
void print_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
