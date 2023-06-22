#include "main.h"

/**
 * print_most_numbers - numbers but not 2 or 4
*/

void print_most_numbers(void)
{
	int num;

	for (num >= 0; num <= 9; num++)
	{
		if (num != 2 && num != 4)
			_putchar(num + '0');
	}
}
