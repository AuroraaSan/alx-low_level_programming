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

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j + i] != needle[j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
		return (&haystack[i]);
	}
}
