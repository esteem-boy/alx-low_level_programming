#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_memset - my define func
 *
 * @s: fisrt argument
 * @b: second argument
 * @n: third argument
 *
 * Return: always 0
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
