#include "main.h"

/**
 * _puts - Function prints a string to stdout
 *
 * @str: Pointer parameter of the function
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
