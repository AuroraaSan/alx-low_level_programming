#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints numbers in hexa
 *
 * Return: 0 (Success)
*/
int main(void)
{
	int n;
	char k;

	for (n = 48 ; n <= 57 ; n++)
	{
		putchar(n);
	} for (k = 'a' ; k <= 'f' ; k++)
	{
		putchar(k);
	}
	putchar('\n');
	return (0);
}
