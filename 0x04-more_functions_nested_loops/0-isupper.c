#include "main.h"

/**
 * _isupper - checks uppercase letters
 * @c: input letter
 *
 * Return: 1 if upper and 0 otherwise
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
