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
	int i;
	int newArr;

	for  (i = 0; i < (n / 2); i++)
	{
		newArr = a[n];
		a[n] = a[n - i - 1];
		a[n - i - 1] = newArr;
	}
}
