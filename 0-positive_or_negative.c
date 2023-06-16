#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: program that show whether n is positive, negative or zero
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("%d\n is zero", n);
	} else if (n < 0)
	{
		printf("%d\n is negative", n);
	} else
	{
		printf("%d\n is positive", n);
	}
	return (0);
}
