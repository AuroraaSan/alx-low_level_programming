#include "main.h"

/**
 * more_numbers - prints numbers
*/

void more_numbers(void)
{
	int num;
	int count;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (count = 0; count <= 14; count++)
		{
			num = count;
			if (num > 9)
			{
				_putchar(1 + 48);
				num = count % 10;
			}
			_putchar(num + 48);
		}
		_putchar('\n');
	}
}
