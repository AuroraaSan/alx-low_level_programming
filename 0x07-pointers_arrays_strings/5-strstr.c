#include "main.h"

/**
 * _strstr -  locates a substring
 * @haystack: pointer to string
 * @needle: substring
 *
 * Return: pointer to the begining of the located substring
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				p = &needle[i];
				return (p);
			}
		}
	}
}
