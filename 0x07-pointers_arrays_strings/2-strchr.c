#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strchr - func of the program
 *
 * @s: argumentr
 * @c: argument
 *
 * Return: 0 on successful
 *
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] >= '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (0);
}
