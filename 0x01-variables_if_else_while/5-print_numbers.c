#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints single digit numbers of bas 10 from 0
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int n;

	for (n = 0 ; n <= 9 ; n++)
	{
		printf("%d", n);
	}
	putchar('\n');
	return (0);
}
