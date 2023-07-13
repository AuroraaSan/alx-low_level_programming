#include "main.h"
#include <stdlib.h>

/**
 * array_range -  creates an array of integers
 * @min: min number
 * @max: maximum number
 * Return: pointer
*/

int *array_range(int min, int max)
{
	int lenn, i;
	int *ptr;

	if (min > max)
		return (NULL);
	lenn = max - min + 1;
	ptr = malloc(sizeof(int) * lenn);
	if (!ptr)
		return (NULL);
	for (i = 0; i < lenn; i++)
		ptr[i] = min++;
	return (ptr);
}
