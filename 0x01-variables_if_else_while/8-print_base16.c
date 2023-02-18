#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Backbone of every C programme
 *
 * Return: (0) Always return successful on programme complte execution
 *
 */
int main(void)
{
	int i;
	char j;

	i = 0;
	j = 'a';
	for (; i < 10;)
	{
		putchar('0' + i);
		i++;
	}
	for (; j <= 'f';)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
