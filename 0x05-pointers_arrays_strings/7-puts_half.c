#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: the string
*/

void puts_half(char *str)
{
	int counter = 0;
	int start, x;

	for (counter = 0; str[counter] != '\0'; counter++)
		;
	if (counter % 2 != 0)
	{
		start = (counter + 1) / 2;
	} else
		start = counter / 2;
	for (x = start; str[x] != '\0'; x++)
		_putchar(str[x]);
	_putchar('\n');
}
