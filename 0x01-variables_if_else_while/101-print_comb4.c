#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: three combinations
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int n = 0, k, j;

	while (n <= 9)
	{
		k = 0;
		while (k <= 9)
		{
			j = 0;
			while (j <= 9)
			{
				if (n != k && n < k && k != j && k < j)
				{
					putchar(n + 48);
					putchar(k + 48);
					putchar(j + 48);
					if (n + k + j != 24)
					{	
						putchar(',');
						putchar(' ');
					}
				}
				j++;
			}
			k++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
