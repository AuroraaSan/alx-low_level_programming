#include "main.h"

/**
 * rev_string - revereses a string
 * @s: string to be reversed
*/

void rev_string(char *s)
{
	int i;

	while (s[i] != '\0')
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
