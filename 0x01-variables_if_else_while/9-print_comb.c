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
	int sp = 32;

	for (n = 48 ; n <= 57 ; n++)
	{
		if (n == 57)
		{
			sim = 36;
			sp = 0;
		}
		putchar(n);
		putchar(sim);
		putchar(sp);
	}
	putchar('\n');
	return (0);
}
