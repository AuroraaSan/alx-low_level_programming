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
	char n;

	for (n = 'a' ; n <= 'z' ; n++)
	{
		putchar(n);
	} for (n = 'A' ; n <= 'Z' ; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
