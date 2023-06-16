#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints combinations
 *
 * Return: 0 (Scuccess)
*/

int main(void)
{
	int n;
	int sim = 44;
	int doll = 36;
	int sp = 32;

	for (n = 48 ; n <= 57 ; n++)
	{
		if (n == 57)
		{
			sim = 36;
		}
		putchar(n);
		putchar(sim);
	}
	putchar('\n');
	return (0);
}
