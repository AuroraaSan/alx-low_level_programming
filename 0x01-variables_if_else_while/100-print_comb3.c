#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: possible combinations of two numbers
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int n = 0, k;

	while (n <= 9)
	{
		k = 0;
		while (k <= 9)
		{
			if (n != k && n < k)
			{
				putchar(n + 48);
				putchar(k + 48);
				if (n + k != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			k++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
