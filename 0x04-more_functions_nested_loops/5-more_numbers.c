#include "main.h"

/***/

void more_numbers(void)
{
	int num;
	int first;
	int second;
	int i;

	for (i = 0; i <= 10; i++)
	{
	for (num = 0; num <= 14; num++)
	{
		if (num < 10)
		{
			_putchar(num + 48);
		} else
		{
			first = num / 10;
			_putchar(first + 48);
			second = num % 10;
			_putchar(second + 48);
		}
	} _putchar('\n');
	}
}
