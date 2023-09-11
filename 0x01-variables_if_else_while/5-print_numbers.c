#include <stdio.h>

/**
 * main - Entry point of my programme
 *
 * Return: (0) always
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}

	putchar('\n');
	return (0);
}
