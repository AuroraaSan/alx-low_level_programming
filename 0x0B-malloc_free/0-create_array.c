#include "main.h"
#include <stdlib.h>

/**
 * create_array -  creates an array of chars, and initializes it
 * @size: size of array
 * @c: the character initialized
 * Return: pointer or NULL
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = (char *)malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size * sizeof(char); i++)
		arr[i] = c;
	return (arr);
}
