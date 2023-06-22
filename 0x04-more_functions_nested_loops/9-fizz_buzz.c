#include <stdio.h>

/**
 * fizzbuzz - prints numbers from 1 to 100
*/

void fizzbuzz(void)
{
	int x;

	for (x = 1; x <= 99; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
			printf("FizzBuzz ");
		else if (x % 3 == 0)
			printf("Fizz ");
		else if (x % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", x);
	}
	printf("Buzz");
	printf("\n");
}
