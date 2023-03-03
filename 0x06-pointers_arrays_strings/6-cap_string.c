#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * *cap_string - This changes to capitals letters all words of a string
 *
 * @str: argument
 *
 * Return: is 0;
 */
char *cap_string(char *str)
{
	char *ret;
	int i;

	i = 0;
	ret = str;

	while (str[i])
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			i++;
		}
		if (str[i - 1] == '\n' ||
		str[i - 1] == '\t' || str[i - 1] == ' ' || str[i - 1] == ':'
		|| str[i - 1] == ';' || str[i - 1] == '{' || str[i - 1] == '}'
		|| str[i - 1] == '!' || str[i - 1] == ',' || str[i - 1] == '.'
		|| str[i - 1] == '?' || str[i - 1] == '(' || str[i - 1] == ')'
		|| str[i - 1] == '"' || i == 0)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (ret);
}
