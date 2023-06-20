#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase.
 */

void print_alphabet(void)
{
	int car;

	for (car = 'a'; car <= 'z'; car++)
	{
		_putchar(car);
	}
	_putchar('\n');
}
