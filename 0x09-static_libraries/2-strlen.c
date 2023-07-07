#include "main.h"

/**
 * _strlen - returns the length of string s
 * @s : string wanted
 *
 * Return: the length wanted
*/

int _strlen(char *s)
{
	int size;

	for (size = 0; *s != '\0'; s++)
		size++;

	return (size);
}
