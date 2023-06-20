#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character that prints
 *
 * Return: on success 1.
 *
*/
int _putchar (char c)
{
	return (write(1, &c, 1));
}
