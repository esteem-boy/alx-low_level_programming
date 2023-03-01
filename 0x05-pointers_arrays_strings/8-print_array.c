#include <string.h>
#include "main.h"

/**
 * print_array - this func prints n elements of an array
 *
 * @a: 1st argument of the func
 * @n: 2nd argument of the func
 *
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}

