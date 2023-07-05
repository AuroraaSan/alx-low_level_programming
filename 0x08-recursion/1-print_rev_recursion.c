#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: the string
*/

void _print_rev_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
