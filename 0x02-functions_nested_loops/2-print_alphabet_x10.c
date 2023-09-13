#include "main.h"

/**
 * print_alphabet_x10 - Print the English letters 10 times
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	int alph;
	int index = 0;

	while (index < 10)
	{
		alph = 97;

		while (alph < 123)
		{
			_putchar(alph);
			alph++;
		}

		_putchar('\n');
		index++;
	}
}
