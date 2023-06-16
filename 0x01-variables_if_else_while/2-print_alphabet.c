#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints lowercase alphabet
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char n = 'a';

	for (n ; n <= 'z'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
