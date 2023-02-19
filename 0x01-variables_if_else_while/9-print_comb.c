#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - As the name implies, is the core of the programme.
 *
 * Return: (0) This will return zere when the program executed successfully.
 *
 */
int main(void)
{
	int i;

	i = 0;
	for (; i <= 9;)
	{
		putchar('0' + i);
		i++;
		putchar(',');
	}
	putchar('\n');
	return (0);
}
