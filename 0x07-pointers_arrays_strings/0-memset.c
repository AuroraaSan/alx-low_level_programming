#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer
 * @b: constant byte
 * @n: the first bytes
 *
 * Return: pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int ittt;

	for (ittt = 0, n > 0; ittt++; n--)
	{
		s[ittt] = b;
	}

	return (s);
}
