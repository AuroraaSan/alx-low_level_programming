#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: printing lowercase alphabets except q and e
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char n;

	for (n = 'a' ; n <= 'z' ; n++)
	{
		if (n != 'e' && n != 'q')
		{
		putchar(n);
		}
	}
	putchar('\n');
	return (0);
}
