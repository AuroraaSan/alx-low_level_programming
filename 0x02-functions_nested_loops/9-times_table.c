#include "main.h"

/**
 * times_table - prints time table
*/

void times_table(void)
{
	int num;
	int line;
	int n;
	int prod;

	for (line = 1; line <= 10; line ++)
	{
		_putchar(48);
		for (num = 1; num <= 9 ; num++)
		{
			for (n = 1; n <= 9; n++)
			{
				_putchar(',');
				_putchar(' ');
				prod = n * num;
				if (prod <= 9)
				{
					_putchar(' ');
				} else
					_putchar((prod / 10) + 48);
				_putchar((prod % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
