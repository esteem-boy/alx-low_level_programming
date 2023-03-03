#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *leet - This function encode a string into 1337
 *
 * @str: argument
 *
 * Return: A value
 */
char *leet(char *str)
{
	char *ret;
	int i;
	char alp_arr[] = { 'a', 'e', 'o', 't', 'l' };
	char num_arr[] = { 4, 3, 0, 7, 1 };

	ret = str;
	i = 0;

	while (*str)
	{
		for (i = 0; i < 5; i++)
		{
			if (*str == alp_arr[i] || *str == alp_arr[i] - 32)
			{
				*str = num_arr[i] + '0';
			}
		}
		str++;
	}
	return (ret);
}
