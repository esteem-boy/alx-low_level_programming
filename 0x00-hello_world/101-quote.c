#include <string.h>
#include <unistd.h>

/**
 * main - Entry Point
 *
 * Return: ALways return the value (1) on successful
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, str, strlen(str));

	return (1);
}
