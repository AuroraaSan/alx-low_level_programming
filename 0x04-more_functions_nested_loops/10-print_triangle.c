#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: size of the triangles
 *
 * Return: Always 0 (Success)
*/

void print_triangle(int size)
{
	int row, num, x;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (num = 1; num <= size; num++)
			{
				if ((row + num) <= size)
					_putchar(' ');
				else
					_putchar('0');
			}
			_putchar('\n');
		}
	}
}
