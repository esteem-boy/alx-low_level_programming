#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * reverse_array - this func reverses the content of an array integers
 *
 * @a: 1st argumrntbof the func
 * @n: 2nd argument of the func
 *
 * Return: usually a void func doesn't return any value
 */
void reverse_array(int *a, int n)
{
	int temporal;
	int *newArr;

	newArr = a + n - 1;

	while (a != newArr && n > 0)
	{
		temporal = *a;
		*a = *newArr;
		*newArr = temporal;
		if (a + 1 == newArr)
		{
			break;
		}
		a++;
		newArr--;
	}
}
