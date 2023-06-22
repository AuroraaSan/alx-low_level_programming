#include "main.h"

/**
 * print_square - prints sqaures in line
 * @size: num of squares
*/

void print_square(int size)
{
	int row, num;

	if (size <= 0)
		_putchar('\n');
	else
	{
	for (row = 0; row < size; row++)
	{
		for (num = 0; num < size; num++)
			_putchar(35);
		_putchar('\n');
	}
	}
}
