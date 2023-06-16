#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the last digit of a number
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int n2 = n % 10;

	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n2);
	} else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n2);
	} else
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n2);
	}
	return (0);
}
