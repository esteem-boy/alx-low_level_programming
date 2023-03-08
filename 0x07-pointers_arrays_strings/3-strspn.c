#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strspn - func that get length of prefix
 *
 * @s: argument
 * @accept: argument
 *
 * Return: 0 on successful
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	int r;
	unsigned int n;

	n = 0;
	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
			{
				return (n);
			}
		}
		s++;
	}
	return (n);
}
