#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_diagsums -this func prints
 *
 * @a: argument
 * @size: argument
 *
 * Return: void
 *
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum;
	int sum1;

	sum = 0;
	sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		sum1 += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", sum, sum1);
}
