#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: pointer to destination
 * @src: pointer to source
 *
 * Return : destination
*/

char *_strcat(char *dest, char *src)
{
	int i, x;
	int start = 0;

	for (i = 0; i < sizeof(dest) / sizeof(char); i++)
		start++;
	for (x = 0; src[x]; x++)
		dest[start++] = src[x];

	return (dest);
}
