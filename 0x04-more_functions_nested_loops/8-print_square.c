#include "main.h"

/**
 * print_square - prints sqaures
 * @size: num of squares
*/

void print_square(int size)
{
	int row;

	if (size <=0)
		_putchar('\n');
	else
	{
	for (row = 1; row <= size; row++)
	{
		for (num = 1; num <= size; num++)
			_putchar('#');
		_putchar('\n');
	}
	}
}
