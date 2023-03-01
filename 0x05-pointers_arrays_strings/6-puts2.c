#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts2 - this func prints every char of a str
 *
 * @str: argument of the func
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int i;
	int j;
	char *k;
	int l;

	i = 0;
	j = 0;
	k = str;

	while (*k != '\0')
	{
		k++;
		i++;
	}
	j = i - 1;

	for (l = 0; l <= j; l++)
	{
		if (l % 2 == 0)
		{
			_putchar(str[l]);
		}
	}
	_putchar('\n');
}

