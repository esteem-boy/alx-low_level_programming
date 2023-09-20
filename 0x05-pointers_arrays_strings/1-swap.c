#include "main.h"

/**
 * swap_int - Function swap the value of its parameters
 *
 * @a: First pointer parameter
 * @b: Second pointer parameter
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
