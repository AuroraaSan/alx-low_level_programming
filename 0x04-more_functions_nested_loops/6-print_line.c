#include "main.h"

/**
 * print_line - draw a straight line
 * @n: length of line
*/

void print_line(int n)
{
	int t, x;

	while (t--)
	{
		if (n > 0)
		{
			for (x = 1; x <= n; x++)
			{
			_putchar(95);
			}
		_putchar('\n');
	}
	_putchar('\n');
}
