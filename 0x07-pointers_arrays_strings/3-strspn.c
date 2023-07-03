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
	int found;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (x = 0; accept[x] != s[i]; x++)
		{
			if (accept[x] == s[i])
			{
				found = 1;
				break;
			}
		}
		if (!found)
			break;
		count++;
	}
	return (count);
}
