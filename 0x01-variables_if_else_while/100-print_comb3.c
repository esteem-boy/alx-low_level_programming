#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Every C program must have a main function
 *
 * Return: (0) This kind of statement must also be included
 *
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 8; i++)
	{
		for (i = 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if ((i != 8) || (j != 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
