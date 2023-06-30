#include "main.h"

/**
 * _strncat - concatenates two strings with n
 * @dest: pointer1
 * @src: pointer2
 * @n: # of characters
 *
 * Return: destination
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, x;
	
	while(dest[i])
		i++;
	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[i++] = src[x];
	dest[i + x] = '\0';

	return (dest);
}