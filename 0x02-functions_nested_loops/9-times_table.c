#include "main.h"

/**
 * times_table - prints time table
*/

void times_table(void)
{
	int num;
	int line;

	for (line = 1; line <= 10; line ++)
	{
		for (num = 1; num <= 9 ; num++)
		{
			_putchar((num * 0) + 48);
			_putchar(',');
			_putchar(' ');
			_putchar((num * 1) + 48);
			_putchar(',');
                        _putchar(' ');
			_putchar((num * 2) + 48);
                        _putchar(',');
                        _putchar(' ');
			_putchar((num * 3) + 48);
                        _putchar(',');
                        _putchar(' ');
			_putchar((num * 4) + 48);
                        _putchar(',');
                        _putchar(' ');
			_putchar((num * 5) + 48);
                        _putchar(',');
                        _putchar(' ');
			_putchar((num * 6) + 48);
                        _putchar(',');
                        _putchar(' ');
			_putchar((num * 7) + 48);
                        _putchar(',');
                        _putchar(' ');
			_putchar((num * 8) + 48);
                        _putchar(',');
                        _putchar(' ');
			_putchar((num * 9) + 48);
                        _putchar(',');
                        _putchar(' ');
		}
		_putchar('\n');
	}
}
