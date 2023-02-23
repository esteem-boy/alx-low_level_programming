#include <ctype.h>
#include "main.h"

/**
 * _islower - check the code.
 *
 * c: - is the arguement of th function islower
 *
 * Return: should be 1 for a lowercae character and 0 if is not.
 */
int _islower(int c) /* 0c: is the argument of the function */
{
	for (c = 97; c <= 122; c++)
	{
		if (c < 97 && c > 122)
		{
			_putchar(c);
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return(0);
}
