#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar('0' + i);
		print_alphabet();
	}

	_putchar('\n');
	return (0);
}
