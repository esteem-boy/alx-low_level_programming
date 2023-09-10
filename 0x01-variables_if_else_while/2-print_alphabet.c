#include <stdio.h>

/**
 * main - Entry point of every C programme
 *
 * Return: (0) on success
 */
int main(void)
{
	int first_letter = 97;

	for (; first_letter <= 122; first_letter++)
	{
		putchar(first_letter);
	}

	putchar('\n');
	return (0);
}
