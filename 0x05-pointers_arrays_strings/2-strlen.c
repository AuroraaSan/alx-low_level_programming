#include "main.h"

/**
 * _strlen - returns length of string
 * @s: string wanted
*/

int _strlen(char *s)
{
	int size;

	size = (sizeof(s)/sizeof(char) - 1);

	return (size);
}
