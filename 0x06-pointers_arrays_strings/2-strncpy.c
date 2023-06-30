#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest:pointer 1
 * @src:pointer 2
 * @n: # of strings
 *
 * Return : @dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
