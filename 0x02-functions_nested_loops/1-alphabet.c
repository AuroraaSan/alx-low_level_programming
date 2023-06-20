#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints lowercase alphabet
 *
 * Return: 0 (Success)
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
