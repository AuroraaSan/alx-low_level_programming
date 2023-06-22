#include <stdio.h>

/**
 * fizzbuzz - prints numbers from 1 to 100*/

void fizzbuzz(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
			printf("FizzBuzz\n");
		else if (x % 3 == 0)
			printf("Fizz\n");
		else if (x % 5 == 0)
			printf("Buzz\n");
		else
			printf("%d\n", x);
	} printf("\n");
}
