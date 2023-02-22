#include "main.h"

/**
 * print_alphabet_10 - This func prints all English alphabet 10 times
 *
 * return: (void)
 */

void print_alphabet_x10(void)
{
	char albet;
	char count;

	albet = 'a';
	count = 0;
	for (; count <= 9; count++)
	{
		for (; albet <= 'z'; albet++)
		{
			_putchar(albet);
		}
	}
	_putchar('\n');
}
