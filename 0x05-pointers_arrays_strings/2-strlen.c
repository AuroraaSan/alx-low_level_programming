#include "main.h"

/**
 * _strlen - returns length of string
 * @s: string wanted
*/

int _strlen(char *s)
{
	int size;

	for (size = 0; *s != '\0'; s++)
		size++;

	return (size);
}
