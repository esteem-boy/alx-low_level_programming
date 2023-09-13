#include "main.h"

/**
 * main - Entry point
 *
 * Return: (0) Always
 */
int main(void)
{
	char str[9] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
	return (0);
}
