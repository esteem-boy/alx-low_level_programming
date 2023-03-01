#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - this func reverses the string
 *
 * @s: is the argument of the func
 *
 * Return: return nothhing
 */
void rev_string(char *s)
{
	int xdir;
	int xlen;

	xdir = 0;

	while (*s != '\0')
	{
		xdir++;
		s++;
	}
	s--;
	for (xlen = xdir; xlen > 0; xlen--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
