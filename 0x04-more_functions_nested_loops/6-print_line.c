#include "main.h"

/**
 * print_line - draw a straight line
 * @n: length of line
*/

void print_line(int n)
{
	int t, x;

	if (n > 0)
	{
		for (x = 1; x <= n; x++)
		{
		_putchar('_');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
