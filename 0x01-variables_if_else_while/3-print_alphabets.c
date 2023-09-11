#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: (0) when successful
 */
int main(void)
{
	int first_small_let = 97;
	int cap_lets = 65;

	while (first_small_let < 123)
	{
		putchar(first_small_let);
		first_small_let++;
	}

	while (cap_lets < 91)
	{
		putchar(cap_lets);
		cap_lets++;
	}

	putchar('\n');
	return (0);
}
