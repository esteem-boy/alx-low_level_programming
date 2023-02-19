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
	int k;

	i = 0;
	j = 1;
	k = ' ';
	for (; i <= 8; i++)
	{
		for (; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if ((i != 8) || (j != 9))
			{
				putchar(',');
				putchar(k);
			}
		}
	}
	putchar('\n');
	return (0);
}
