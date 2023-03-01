#include "main.h"
/**
 * puts_half - this func prints out half of a string under certain conditions
 *
 * @str: argument of the func
 *
 * Return: half of input
 */
void puts_half(char *str)
{
	int a;
	int n;
	int l;

	l = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		l++;
	}

	n = (l / 2);

	if ((l % 2) == 1)
	{
		n = ((l + 1) / 2);
	}

	for (a = n; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}

