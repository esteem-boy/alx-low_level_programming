#include <stdio.h>
#include "main.h"

/**
 * swap_in - this func swap the value of it variable
 *
 * @a: First argument of the func
 * @b: Second argument of the func
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
