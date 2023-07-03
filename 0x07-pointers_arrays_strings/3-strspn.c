#include "main.h"

/**
 * strspn - gets the length of a prefix substring
 * @s: pointer to string
 * @accept: pointer to the consisting bytes
 *
 * Return: number of byter in the initial segment s
*/

unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int i, x;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; accept[x] != s[i]; x++)
		{
			if (accept[x] == '\0')
				count++;
			else
				break;
		}
	}
	return (count);
}
