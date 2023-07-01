#include "main.h"

/**
 * loweer - determines whether lowercase char
 * @c: char
 *
 * Return: 1 or 0
*/

int loweer(char c)
{
	return (c >= 97 && c <= 122);
}
/**
 * dilimiter - delimiter or not
 * @c: char
 * Return: 0 or 1
*/

int dilimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}
/**
 * cap_string - capitalizes all words of a string
 * @s: the string
 *
 * Return: str
*/
char *cap_string(char *s)
{
	char *ptr = s;
	int founddelimit = 1;

	while (*s)
	{
		if (dilimiter(*s))
			founddlimit = 1;
		else if (loweer(*s) && founddelimit)
		{
			*s -= 32;
			founddelimit = 0;
		}
		else
			founddelimit = 0;
		s++;
	}
	return (ptr);
}
