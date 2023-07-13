#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: array
 * size: size in bytes
 * Return: pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *m;
	unsigned int k = sizeof(int) * nmemb;

	if (nmemb == 0 || size == 0)
		return (NULL);
	m = malloc(sizeof(int) * nmemb);
	if (m == 0)
		return (NULL);
	while (k--)
		*m++ = 0;
	return (m);
}
