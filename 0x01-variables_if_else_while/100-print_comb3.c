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
	j = i + 1;
	k = ' ';
	for (; i <= 8; i++)
	{
		for (; j <= 9; j++)
		{
			if (i != j)
			{
				putchar(i + '0');
				putchar(j + '0');
				if ((i + j) = 17)
				{
					putchar(',');
					putchar(k);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
