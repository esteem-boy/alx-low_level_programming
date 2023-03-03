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

	while (str[i] != '\0')
	{
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
			else
			{
				continue;
			}
		}
		else if (i == ' ')
		{
			++i;
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
			else
			{
				continue;
			}
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] = str[i] + 32;
			}
		}
		str++;
	}
	return (ret);
}
