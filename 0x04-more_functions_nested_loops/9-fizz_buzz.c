#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* main - this func forms the bearybones of every C program
*
* Return: should return the value 0
*
*/

int main(void)
{
	int i;
	/**
	 * char str0[4] = "Fizz";
	 * char str1[4] = "Buzz";
	 * unsigned char str2[8] = "FizzBuzz";
	 */

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (i == 1)
		{
			printf(" %d", i);
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");
	return (0);
}
