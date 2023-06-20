#include "main.h"

/**
 * times_table - prints time table
*/

void times_table(void)
{
	int num;
	int line;
	int n;

	for (line = 1; line <= 10; line ++)
	{
		for (num = 1; num <= 9 ; num++)
		{
			for (n = 0; n <=9; n++)
			{
				_putchar(num * n);
				_putchar(',');
				_putchar(' ');
			}
		}	
	}
}
