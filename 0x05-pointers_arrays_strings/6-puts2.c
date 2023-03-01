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

	i = strlen(str);
	for (j = 0; j <= i - 1; j++)
	{
		if (i % 2 == 0)
		{
			printf("%s\n", str);
		}
		else
		{
			continue;
		}
	}
}
