#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - THe main function fo the C code
 *
 * Return: (0) when programme execute successfully
 *
 */
int main(void)
{
	char i = 'z';

	for (; i >= 'a';)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
