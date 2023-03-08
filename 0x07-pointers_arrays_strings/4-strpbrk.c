#include "main.h"

/**
 * *_strpbrk - func that searches the string for any set of bytes
 *
 * @s: argument
 * accept: argument
 *
 * Return: 0 when tru
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
