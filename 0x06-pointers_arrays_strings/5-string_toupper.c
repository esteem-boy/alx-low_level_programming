#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * *string_toupper - this func converts all lowercases to uppercases
 *
 * @str: argument
 *
 * Return: Always 0
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
