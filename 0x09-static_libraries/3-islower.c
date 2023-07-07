#include "main.h"

/**
 * _islower -  checks for lowercase character.
 * @c: checks input of function
 *
 * Return: 0 if lower case and 1 if not
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
