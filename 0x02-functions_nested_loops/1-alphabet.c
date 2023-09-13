#include "main.h"

/**
 * print_alphabet - This function prints the english letters
 *
 * Return: Nothing
 */
void print_alphabet(void)
{
	int alph = 97;

	while (alph < 123)
	{
		_putchar(alph);
		alph++;
	}

	_putchar('\n');
}
