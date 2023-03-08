#include "main.h"

/**
 * print_chessboard - func that print chessboard
 *
 * @a: is an array argument
 *
 * Return: void
 *
 */
void print_chessboard(char (*a)[8])
{
	int i;

	i = 0;
	while (i < 8)
	{
		int j;

		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
