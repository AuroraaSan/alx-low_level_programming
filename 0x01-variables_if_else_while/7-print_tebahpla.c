#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints alphabet from z to a
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char n;

	for (n = 'z' ; n >= 'a' ; n--)
	{
		putchar(n);
	} putchar('\n');
	return (0);
}
