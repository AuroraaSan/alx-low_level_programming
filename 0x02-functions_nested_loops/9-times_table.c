#include "main.h"

/**
 * times_table - prints time table
*/

void times_table(void)
{
	int num;
	int line;
	int prod;

	for (line = 0; line <= 9; line++)
	{
		_putchar(48);
		for (num = 1; num <= 9 ; num++)
		{
			_putchar(',');
			_putchar(' ');
			prod = line * num;
			if (prod <= 9)
			{
				_putchar(' ');
			} else
				_putchar((prod / 10) + 48);
			_putchar((prod % 10) + 48);
		}
		_putchar('\n');
	}
}
