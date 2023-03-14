#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *create_array - func creates an array of character
 *
 * @size: argument size of the array
 * @c: second argument of the func
 *
 * Return: (0) when successful
 *
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = malloc((size + 1) * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
