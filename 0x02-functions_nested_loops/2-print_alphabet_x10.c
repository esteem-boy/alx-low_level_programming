#include "main.h"

/**
 * print_alphabet_x10 - This func prints all English alphabet 10 times
 *
 * return: (void)
 */

void print_alphabet_x10(void)
{
	char albet;
	char count;

	for (count = 0; count <= 9; count++)
	{
		for (albet = 'a'; albet <= 'z'; albet++)
		{
			_putchar(albet);
		}
	_putchar('\n');
	}
}
