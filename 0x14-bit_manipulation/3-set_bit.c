#include "main.h"

/**
 * set_bit - Sets the bit at a given index to 1.
 * @n: A pointer to the number to modify.
 * @index: The index of the bit to set (starting from 0).
 *
 * Return: 1 if successful, -1 if an error occurs.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(n) * 8))
		return (-1);
	return (!!(*n |= 1L << index));
}