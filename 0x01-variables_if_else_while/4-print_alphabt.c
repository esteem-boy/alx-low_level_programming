#include <stdio.h>

/**
 * main - Entry point of my programme
 *
 * Return: (0) always successful
 */
int main(void)
{
	int ltrs = 97;

	while (ltrs < 123)
	{
		if (!(ltrs == 101 || ltrs == 113))
		{
			putchar(ltrs);
		};
		ltrs++;
	}

	putchar('\n');
	return (0);
}
