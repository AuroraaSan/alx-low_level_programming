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
	if (size == 0)
		return (NULL);
	else
	{
		char* arr;
		unsigned int i;

		arr = (char*)malloc(size * sizeof(char));
		for (i = 0; i < size * sizeof(char); i++)
			arr[i] = c;
		return (arr);
	}
	free(arr);
	return (0);
	
}
