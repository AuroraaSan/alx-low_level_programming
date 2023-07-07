#include "main.h"

/**
 * _puts - prints a string
 * @str: the string that will be printed
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
